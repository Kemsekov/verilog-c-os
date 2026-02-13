// Simplified testbench for CPU simulation with basic memory
`define SIMULATION
`define XV6

module cpu_simple_tb;

reg i_clk;
reg [31:0] w_input_bus_data;
reg w_input_bus_DV;
wire [31:0] w_output_bus_data;
wire [31:0] w_output_bus_address;
wire w_output_bus_DV;
wire [2:0] w_output_bhw;
wire w_output_write_notread;
wire [1023:0] w_regs;
wire [31:0] w_reg;
wire [31:0] w_state;
wire [31:0] w_PC;
wire [31:0] w_IR;
wire [31:0] w_instruction;

// Interrupt signals
wire w_interrupt;
reg w_ack = 0;  // Reg that connects to CPU
wire w_s_interrupt;

// Memory signals
reg [31:0] mem [0:65535];  // Simple 256KB memory
wire [31:0] mem_read_data;

// Memory access
assign mem_read_data = mem[w_output_bus_address[17:0]];  // Using lower 18 bits for 256KB

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
  .o_regs(w_regs),
  .o_state(w_state),
  .o_PC(w_PC),
  .o_instruction(w_instruction),
  .o_IR(w_IR),

  .i_plic_interrupt(w_interrupt),
  .o_plic_ack(w_ack),
  .o_s_interrupt(w_s_interrupt)
);

// Simple memory controller simulation
reg [31:0] addr_reg;
reg [2:0] bhw_reg;
reg write_reg;
reg [31:0] write_data_reg;
reg mem_access_valid;

always @(posedge i_clk) begin
  if (w_output_bus_DV) begin
    addr_reg <= w_output_bus_address;
    bhw_reg <= w_output_bhw;
    write_reg <= w_output_write_notread;
    write_data_reg <= w_output_bus_data;
    mem_access_valid <= 1;
    
    if (!w_output_write_notread) begin  // Write operation
      case (w_output_bhw)
        3'b100: begin  // Write 32-bit
          mem[w_output_bus_address[17:0]] <= w_output_bus_data;
        end
        3'b010: begin  // Write 16-bit
          mem[w_output_bus_address[17:0]][15:0] <= w_output_bus_data[15:0];
        end
        3'b001: begin  // Write 8-bit
          mem[w_output_bus_address[17:0]][7:0] <= w_output_bus_data[7:0];
        end
      endcase
    end
  end else begin
    mem_access_valid <= 0;
  end
end

// Feed memory read data back to CPU
always @(*) begin
  if (mem_access_valid && write_reg) begin  // This is a read operation
    w_input_bus_data = mem_read_data;
    w_input_bus_DV = 1;
  end else begin
    w_input_bus_data = 32'h0;
    w_input_bus_DV = 0;
  end
end

// Clock generation
initial begin
  i_clk = 0;
  forever #5 i_clk = ~i_clk;  // 10ns period = 100MHz
end

// Initialize memory with kernel data
initial begin
  $readmemh("../misc/xv6.mif", mem);  // Load kernel from MIF file
  w_ack = 0;
  w_input_bus_DV = 0;
  w_input_bus_data = 0;
  
  #1000000;  // Run for some time
  
  $display("Simulation ended at time %t", $time);
  $finish;
end

// Monitor important signals
always @(posedge i_clk) begin
  if (w_output_bus_DV) begin
    $display("Time: %t, Addr: %h, Data: %h, Write: %b", $time, w_output_bus_address, w_output_bus_data, w_output_write_notread);
  end
end

endmodule