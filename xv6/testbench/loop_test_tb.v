`define SIMULATION
`define LOOP_TEST

module loop_test_tb;

// Clock - 10ns period = 100MHz
reg i_clk;
initial begin
  i_clk = 0;
  forever #5 i_clk = ~i_clk;
end

// Debug reset (active LOW, asserted for first 100 cycles)
reg i_debug_reset_n;
initial begin
  i_debug_reset_n = 0;
  #100 i_debug_reset_n = 1;
end

// CPU signals
wire [31:0] w_input_bus_data;
wire w_input_bus_DV;
reg [31:0] r_input_bus_data;
reg r_input_bus_DV;
wire [31:0] w_output_bus_data;
wire [31:0] w_output_bus_address;
wire w_output_bus_DV;
wire [2:0] w_output_bhw;
wire w_output_write_notread;
wire [31:0] w_PC;
wire [31:0] w_IR;
wire [31:0] w_instruction;

assign w_input_bus_data = r_input_bus_data;
assign w_input_bus_DV = r_input_bus_DV;

// Interrupt signals
wire w_interrupt = 0;
wire w_ack;
wire w_s_interrupt;

// CPU instance
CPU_top cpu(
  .i_clk(i_clk),
  .i_bus_data(w_input_bus_data),
  .i_bus_DV(w_input_bus_DV),
  .o_bus_data(w_output_bus_data),
  .o_bus_address(w_output_bus_address),
  .o_bus_DV(w_output_bus_DV),
  .o_bhw(w_output_bhw),
  .o_write_notread(w_output_write_notread),
  .o_regs(),
  .o_state(),
  .o_PC(w_PC),
  .o_instruction(w_instruction),
  .o_IR(w_IR),

  .i_plic_interrupt(w_interrupt),
  .o_plic_ack(w_ack),
  .o_s_interrupt(w_s_interrupt)
);

// Simple memory for test program
reg [7:0] program_mem [0:1023];  // 1KB for program
reg [7:0] data_mem [0:1023];     // 1KB for data

// Memory-mapped test output at 0x60000000
reg [31:0] test_output_0 = 32'h0;   // 0x60000000
reg [31:0] test_output_4 = 32'h0;   // 0x60000004
reg [31:0] test_output_8 = 32'h0;   // 0x60000008
reg [31:0] test_output_12 = 32'h0;  // 0x6000000C
reg [31:0] test_output_16 = 32'h0;  // 0x60000010 (loop counter)
reg [31:0] test_output_20 = 32'h0;  // 0x60000014 (counter * 17)
reg [31:0] test_output_24 = 32'h0;  // 0x60000018 (counter XOR 0xFFFFFFFF)

// Load program from hex file
initial begin
  $readmemh("loop_test.hex", program_mem);
end

// Memory state machine
localparam IDLE = 2'b00;
localparam COLLECTING = 2'b01;
localparam RESPONDING = 2'b10;

reg [1:0] mem_state = IDLE;
reg [1:0] byte_counter = 2'b00;
reg [31:0] pending_address;
reg pending_write;
reg [31:0] assembled_data;

always @(posedge i_clk) begin
  r_input_bus_DV <= 0;
  
  if (mem_state == RESPONDING) begin
    // Execute write or send read response
    if (pending_write) begin
      // Debug: show write address and data
      $display("[%0t] WRITE addr=0x%08h data=0x%08h bhw=%b", $time, pending_address, assembled_data, w_output_bhw);
      
      // Execute write with stable assembled_data
      if (pending_address >= 32'h80001000 && pending_address < 32'h80001400) begin
        if (w_output_bhw[0]) data_mem[pending_address[9:0]] <= assembled_data[7:0];
        if (w_output_bhw[1]) data_mem[pending_address[9:0] + 1] <= assembled_data[15:8];
        if (w_output_bhw[2]) data_mem[pending_address[9:0] + 2] <= assembled_data[23:16];
        if (w_output_bhw[3]) data_mem[pending_address[9:0] + 3] <= assembled_data[31:24];
      end else if (pending_address == 32'h60000000) begin
        test_output_0 <= assembled_data;
      end else if (pending_address == 32'h60000004) begin
        test_output_4 <= assembled_data;
      end else if (pending_address == 32'h60000008) begin
        test_output_8 <= assembled_data;
      end else if (pending_address == 32'h6000000C) begin
        test_output_12 <= assembled_data;
      end else if (pending_address == 32'h60000010) begin
        test_output_16 <= assembled_data;
      end else if (pending_address == 32'h60000014) begin
        test_output_20 <= assembled_data;
      end else if (pending_address == 32'h60000018) begin
        test_output_24 <= assembled_data;
      end
      // Send write acknowledgment
      r_input_bus_data <= 32'h0;
      r_input_bus_DV <= 1;
    end else begin
      // Send read response
      r_input_bus_data <= assembled_data;
      r_input_bus_DV <= 1;
    end
    mem_state <= IDLE;
  end else if (mem_state == COLLECTING) begin
    byte_counter <= byte_counter + 1;
    
    if (pending_write) begin
      // WRITE - collect bytes
      case (byte_counter)
        2'b00: assembled_data[15:8] <= w_output_bus_data[15:8];
        2'b01: assembled_data[23:16] <= w_output_bus_data[23:16];
        2'b10: begin
          assembled_data[31:24] <= w_output_bus_data[31:24];
          // Mark write complete - execute on NEXT cycle
          mem_state <= RESPONDING;
        end
      endcase
    end else begin
      // READ - collect bytes
      case (byte_counter)
        2'b00: begin
          if (pending_address >= 32'h80000000 && pending_address < 32'h80000400)
            assembled_data[15:8] <= program_mem[pending_address[9:0] + 1];
          else if (pending_address >= 32'h80001000 && pending_address < 32'h80001400)
            assembled_data[15:8] <= data_mem[pending_address[9:0] + 1];
          else if (pending_address == 32'h60000000) begin
            assembled_data[15:8] <= test_output_0[15:0];
            $display("[%0t] READ 0x60000000: 0x%08h", $time, test_output_0);
          end else if (pending_address == 32'h60000004) begin
            assembled_data[15:8] <= test_output_4[15:0];
            $display("[%0t] READ 0x60000004: 0x%08h", $time, test_output_4);
          end else if (pending_address == 32'h60000008) begin
            assembled_data[15:8] <= test_output_8[15:0];
            $display("[%0t] READ 0x60000008: 0x%08h", $time, test_output_8);
          end else if (pending_address == 32'h6000000C) begin
            assembled_data[15:8] <= test_output_12[15:0];
            $display("[%0t] READ 0x6000000C: 0x%08h", $time, test_output_12);
          end else if (pending_address == 32'h60000010) begin
            assembled_data[15:8] <= test_output_16[15:0];
            $display("[%0t] READ 0x60000010: 0x%08h", $time, test_output_16);
          end else if (pending_address == 32'h60000014) begin
            assembled_data[15:8] <= test_output_20[15:0];
            $display("[%0t] READ 0x60000014: 0x%08h", $time, test_output_20);
          end else if (pending_address == 32'h60000018) begin
            assembled_data[15:8] <= test_output_24[15:0];
            $display("[%0t] READ 0x60000018: 0x%08h", $time, test_output_24);
          end
        end
        2'b01: begin
          if (pending_address >= 32'h80000000 && pending_address < 32'h80000400)
            assembled_data[23:16] <= program_mem[pending_address[9:0] + 2];
          else if (pending_address >= 32'h80001000 && pending_address < 32'h80001400)
            assembled_data[23:16] <= data_mem[pending_address[9:0] + 2];
          else if (pending_address == 32'h60000000)
            assembled_data[23:16] <= test_output_0[23:16];
          else if (pending_address == 32'h60000004)
            assembled_data[23:16] <= test_output_4[23:16];
          else if (pending_address == 32'h60000008)
            assembled_data[23:16] <= test_output_8[23:16];
          else if (pending_address == 32'h6000000C)
            assembled_data[23:16] <= test_output_12[23:16];
          else if (pending_address == 32'h60000010)
            assembled_data[23:16] <= test_output_16[23:16];
          else if (pending_address == 32'h60000014)
            assembled_data[23:16] <= test_output_20[23:16];
          else if (pending_address == 32'h60000018)
            assembled_data[23:16] <= test_output_24[23:16];
        end
        2'b10: begin
          if (pending_address >= 32'h80000000 && pending_address < 32'h80000400)
            assembled_data[31:24] <= program_mem[pending_address[9:0] + 3];
          else if (pending_address >= 32'h80001000 && pending_address < 32'h80001400)
            assembled_data[31:24] <= data_mem[pending_address[9:0] + 3];
          else if (pending_address == 32'h60000000)
            assembled_data[31:24] <= test_output_0[31:24];
          else if (pending_address == 32'h60000004)
            assembled_data[31:24] <= test_output_4[31:24];
          else if (pending_address == 32'h60000008)
            assembled_data[31:24] <= test_output_8[31:24];
          else if (pending_address == 32'h6000000C)
            assembled_data[31:24] <= test_output_12[31:24];
          else if (pending_address == 32'h60000010)
            assembled_data[31:24] <= test_output_16[31:24];
          else if (pending_address == 32'h60000014)
            assembled_data[31:24] <= test_output_20[31:24];
          else if (pending_address == 32'h60000018)
            assembled_data[31:24] <= test_output_24[31:24];
          // Respond on next cycle
          mem_state <= RESPONDING;
        end
      endcase
    end
  end else begin
    // IDLE state
    if (w_output_bus_DV) begin
      pending_address <= w_output_bus_address;
      pending_write <= w_output_write_notread;
      byte_counter <= 2'b00;
      mem_state <= COLLECTING;
      
      if (!w_output_write_notread) begin
        // READ - collect first byte
        if (w_output_bus_address >= 32'h80000000 && w_output_bus_address < 32'h80000400)
          assembled_data[7:0] <= program_mem[w_output_bus_address[9:0]];
        else if (w_output_bus_address >= 32'h80001000 && w_output_bus_address < 32'h80001400)
          assembled_data[7:0] <= data_mem[w_output_bus_address[9:0]];
        else if (w_output_bus_address == 32'h60000000)
          assembled_data[7:0] <= test_output_0[7:0];
        else if (w_output_bus_address == 32'h60000004)
          assembled_data[7:0] <= test_output_4[7:0];
        else if (w_output_bus_address == 32'h60000008)
          assembled_data[7:0] <= test_output_8[7:0];
        else if (w_output_bus_address == 32'h6000000C)
          assembled_data[7:0] <= test_output_12[7:0];
        else if (w_output_bus_address == 32'h60000010)
          assembled_data[7:0] <= test_output_16[7:0];
        else if (w_output_bus_address == 32'h60000014)
          assembled_data[7:0] <= test_output_20[7:0];
        else if (w_output_bus_address == 32'h60000018)
          assembled_data[7:0] <= test_output_24[7:0];
      end else begin
        // WRITE - collect first byte
        assembled_data[7:0] <= w_output_bus_data[7:0];
        assembled_data[31:8] <= 24'h0;
      end
    end
  end
end

// Monitor execution
integer instruction_count;
reg [31:0] last_pc;
reg loop_detected;
integer loop_iterations;
reg [31:0] last_test_16;

initial begin
  instruction_count = 0;
  last_pc = 32'h0;
  loop_detected = 0;
  loop_iterations = 0;
  last_test_16 = 0;
  
  $display("===========================================");
  $display("Loop Test Program Simulation");
  $display("===========================================");
  $display("");
  $display("Expected behavior:");
  $display("  INITIAL OPERATIONS (before loop):");
  $display("    1. x1 = 0x11111111");
  $display("    2. x2 = 0x22222222");
  $display("    3. x3 = x1 + x2 = 0x33333333 -> store to 0x60000000");
  $display("    4. x5 = x1 ^ x2 = 0x33333333 -> store to 0x60000004");
  $display("    5. x6 = x1 & x2 = 0x00000000 -> store to 0x60000008");
  $display("    6. x7 = x1 | x2 = 0x33333333 -> store to 0x6000000C");
  $display("");
  $display("  INFINITE LOOP (at PC=0x80000034):");
  $display("    - Increment counter at 0x60000010");
  $display("    - Store counter*17 at 0x60000014");
  $display("    - Store counter^0xFFFFFFFF at 0x60000018");
  $display("");
end

always @(posedge i_clk) begin
  if (i_debug_reset_n) begin
    if (w_PC != last_pc) begin
      instruction_count = instruction_count + 1;
      last_pc = w_PC;
      
      // Print first 30 instructions
      if (instruction_count <= 30) begin
        $display("[%0t] PC: 0x%08h | INST: 0x%08h | COUNT: %d", 
                 $time, w_PC, w_IR, instruction_count);
      end
      
      // Detect loop entry (PC = 0x80000034)
      if (w_PC == 32'h80000034 && !loop_detected) begin
        loop_detected = 1;
        $display("");
        $display("[%0t] *** LOOP DETECTED at PC=0x%08h (instruction %d) ***", 
                 $time, w_PC, instruction_count);
        $display("");
        $display("Initial test outputs after pre-loop operations:");
        $display("  0x60000000 (x1+x2):     0x%08h (expected 0x33333333)", test_output_0);
        $display("  0x60000004 (x1^x2):     0x%08h (expected 0x33333333)", test_output_4);
        $display("  0x60000008 (x1&x2):     0x%08h (expected 0x00000000)", test_output_8);
        $display("  0x6000000C (x1|x2):     0x%08h (expected 0x33333333)", test_output_12);
        $display("");
      end
      
      // Count loop iterations (detect after the last SW in loop body at PC=0x80000058)
      if (loop_detected && w_PC == 32'h80000058 && instruction_count > 20) begin
        loop_iterations = loop_iterations + 1;
        
        // Print loop iteration info (writes just completed)
        if (loop_iterations <= 5) begin
          $display("[%0t] Loop iteration %d COMPLETE: counter=0x%08h, counter*17=0x%08h, counter^FF..=0x%08h",
                   $time, loop_iterations, test_output_16, test_output_20, test_output_24);
        end
      end
      
      // Stop after 5 loop iterations
      if (loop_iterations >= 5) begin
        $display("");
        $display("[%0t] Stopping after %d loop iterations", $time, loop_iterations);
        $display("");
        $display("===========================================");
        $display("FINAL RESULTS");
        $display("===========================================");
        $display("");
        $display("Pre-loop operations:");
        $display("  0x60000000 (x1+x2):     0x%08h %s", test_output_0, 
                 test_output_0 == 32'h33333333 ? "[OK]" : "[FAIL]");
        $display("  0x60000004 (x1^x2):     0x%08h %s", test_output_4,
                 test_output_4 == 32'h33333333 ? "[OK]" : "[FAIL]");
        $display("  0x60000008 (x1&x2):     0x%08h %s", test_output_8,
                 test_output_8 == 32'h00000000 ? "[OK]" : "[FAIL]");
        $display("  0x6000000C (x1|x2):     0x%08h %s", test_output_12,
                 test_output_12 == 32'h33333333 ? "[OK]" : "[FAIL]");
        $display("");
        $display("Loop operations (iteration %d):", loop_iterations);
        $display("  0x60000010 (counter):   0x%08h", test_output_16);
        $display("  0x60000014 (counter*17):0x%08h", test_output_20);
        $display("  0x60000018 (counter^FF):0x%08h", test_output_24);
        $display("");
        
        // Verify results
        if (test_output_0 != 32'h33333333 ||
            test_output_4 != 32'h33333333 ||
            test_output_8 != 32'h00000000 ||
            test_output_12 != 32'h33333333 ||
            test_output_16 != 32'h00000005 ||
            test_output_20 != 32'h00000055 ||
            test_output_24 != 32'hFFFFFFFA) begin
          if (test_output_0 != 32'h33333333)
            $display("  [FAIL] x1+x2 incorrect");
          if (test_output_4 != 32'h33333333)
            $display("  [FAIL] x1^x2 incorrect");
          if (test_output_8 != 32'h00000000)
            $display("  [FAIL] x1&x2 incorrect");
          if (test_output_12 != 32'h33333333)
            $display("  [FAIL] x1|x2 incorrect");
          if (test_output_16 != 32'h00000005)
            $display("  [FAIL] counter incorrect (got 0x%08h, expected 5)", test_output_16);
          if (test_output_20 != 32'h00000055)
            $display("  [FAIL] counter*17 incorrect (got 0x%08h, expected 0x55)", test_output_20);
          if (test_output_24 != 32'hFFFFFFFA)
            $display("  [FAIL] counter^FF.. incorrect");
          $display("");
          $display("[FAIL] Some operations produced incorrect results");
        end else begin
          $display("");
          $display("[SUCCESS] All operations executed correctly!");
          $display("  - Pre-loop arithmetic operations: PASS");
          $display("  - Loop with counter increment: PASS");
          $display("  - Loop with multiply (shift+add): PASS");
          $display("  - Loop with XOR: PASS");
          $display("  - Jump back to loop start: PASS");
        end
        $display("===========================================");
        #200 $finish;
      end
    end
  end
end

// Timeout
initial begin
  #10000;
  $display("");
  $display("[TIMEOUT] Simulation ran for 10us without completing");
  $display("Final PC: 0x%08h", w_PC);
  $finish;
end

endmodule
