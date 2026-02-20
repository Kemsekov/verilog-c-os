`define SIMULATION
`define SIMPLE_TEST

module simple_test_tb;

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
reg [31:0] test_output;

// Load program from hex file
initial begin
  $readmemh("minimal_test.hex", program_mem);
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
      // Execute write with stable assembled_data
      if (pending_address >= 32'h80001000 && pending_address < 32'h80001400) begin
        if (w_output_bhw[0]) data_mem[pending_address[9:0]] <= assembled_data[7:0];
        if (w_output_bhw[1]) data_mem[pending_address[9:0] + 1] <= assembled_data[15:8];
        if (w_output_bhw[2]) data_mem[pending_address[9:0] + 2] <= assembled_data[23:16];
        if (w_output_bhw[3]) data_mem[pending_address[9:0] + 3] <= assembled_data[31:24];
      end else if (pending_address == 32'h60000000) begin
        test_output <= assembled_data;
        $display("[%0t] TEST_OUTPUT: 0x%08h", $time, assembled_data);
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
        2'b00: begin
          assembled_data[15:8] <= w_output_bus_data[15:8];
          $display("[%0t] MEM: WRITE byte 1 = %h", $time, w_output_bus_data[15:8]);
        end
        2'b01: begin
          assembled_data[23:16] <= w_output_bus_data[23:16];
          $display("[%0t] MEM: WRITE byte 2 = %h", $time, w_output_bus_data[23:16]);
        end
        2'b10: begin
          assembled_data[31:24] <= w_output_bus_data[31:24];
          $display("[%0t] MEM: WRITE byte 3 = %h, full data = %h", $time, w_output_bus_data[31:24], w_output_bus_data);
          // Mark write complete - execute on NEXT cycle after assembled_data is stable
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
        end
        2'b01: begin
          if (pending_address >= 32'h80000000 && pending_address < 32'h80000400)
            assembled_data[23:16] <= program_mem[pending_address[9:0] + 2];
          else if (pending_address >= 32'h80001000 && pending_address < 32'h80001400)
            assembled_data[23:16] <= data_mem[pending_address[9:0] + 2];
        end
        2'b10: begin
          if (pending_address >= 32'h80000000 && pending_address < 32'h80000400)
            assembled_data[31:24] <= program_mem[pending_address[9:0] + 3];
          else if (pending_address >= 32'h80001000 && pending_address < 32'h80001400)
            assembled_data[31:24] <= data_mem[pending_address[9:0] + 3];
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
        $display("[%0t] MEM: Request addr=%h, collected byte 0", $time, w_output_bus_address);
      end else begin
        // WRITE - collect first byte INTO assembled_data
        assembled_data[7:0] <= w_output_bus_data[7:0];
        assembled_data[31:8] <= 24'h0;  // Clear upper bytes
        $display("[%0t] MEM: WRITE request addr=%h, byte 0 = %h", $time, w_output_bus_address, w_output_bus_data[7:0]);
      end
    end
  end
end

// Monitor execution
integer instruction_count;
reg [31:0] last_pc;
wire [1023:0] w_regs;

// Connect to CPU register file
assign w_regs = cpu.o_regs;

initial begin
  instruction_count = 0;
  last_pc = 32'h0;
  
  $display("===========================================");
  $display("Simple Test Program Simulation");
  $display("===========================================");
  $display("");
  $display("Expected execution:");
  $display("  1. LUI ra, 0x12345");
  $display("  2. ADDI ra, ra, 0x678  (ra = 0x12345678)");
  $display("  3. LUI sp, 0x60000     (sp = 0x60000000)");
  $display("  4. SW ra, 0(sp)        (store 0x12345678 to 0x60000000)");
  $display("  5. NOP");
  $display("  6. J -8 (infinite loop)");
  $display("");
end

always @(posedge i_clk) begin
  if (i_debug_reset_n) begin
    if (w_PC != last_pc) begin
      instruction_count = instruction_count + 1;
      last_pc = w_PC;
      
      if (instruction_count <= 20) begin
        $display("[%0t] PC: 0x%08h | INST: 0x%08h | ra(x1): 0x%08h | COUNT: %d", 
                 $time, w_PC, w_IR, w_regs[63:32], instruction_count);
      end
      
      // Check if we reached the infinite loop
      if (w_PC == 32'h80000010) begin
        $display("");
        $display("[%0t] Reached infinite loop at PC=0x%08h", $time, w_PC);
        $display("Total instructions executed: %d", instruction_count);
        $display("Register ra (x1): 0x%08h", w_regs[63:32]);
        $display("Final TEST_OUTPUT: 0x%08h", test_output);
        $display("");
        if (test_output == 32'h12345678) begin
          $display("[SUCCESS] Program executed correctly!");
        end else begin
          $display("[FAIL] TEST_OUTPUT=0x%08h, expected 0x12345678", test_output);
        end
        $display("===========================================");
        #200 $finish;
      end
    end
  end
end

// Timeout
initial begin
  #2000;
  $display("");
  $display("[TIMEOUT] Simulation ran for 2us without completing");
  $display("Final PC: 0x%08h", w_PC);
  $display("Final TEST_OUTPUT: 0x%08h", test_output);
  $finish;
end

endmodule
