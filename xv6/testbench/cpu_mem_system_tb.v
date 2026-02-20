`define SIMULATION
`define XV6

// Debug verbosity: 0=none, 1=PC only, 2=PC+mem, 3=full+decode
`ifndef DEBUG_VERBOSITY
  `define DEBUG_VERBOSITY 2
`endif

module cpu_mem_system_tb;

// Clock
reg i_clk;
initial begin
  i_clk = 0;
  forever #5 i_clk = ~i_clk;  // 10ns period = 100MHz
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
  .o_regs(w_regs),
  .o_state(w_state),
  .o_PC(w_PC),
  .o_instruction(w_instruction),
  .o_IR(w_IR),

  .i_plic_interrupt(w_interrupt),
  .o_plic_ack(w_ack),
  .o_s_interrupt(w_s_interrupt)
);

// Memory system signals
wire SDRAM_B0;
wire SDRAM_B1;
wire SDRAM_DQMH;
wire SDRAM_DQML;
wire SDRAM_WE;
wire SDRAM_CAS;
wire SDRAM_RAS;
wire SDRAM_CS;
wire SDRAM_CLK;
wire SDRAM_CKE;
wire [11:0] SDRAM_A;
wire [15:0] SDRAM_D;

wire [31:0] w_gpu_address;
wire [7:0] w_gpu_data;

wire [31:0] w_hex;

wire [7:0] w_sd_card_state;

wire [6:0]  HEX0_D;
wire        HEX0_DP;
wire [6:0]  HEX1_D;
wire        HEX1_DP;
wire [6:0]  HEX2_D;
wire        HEX2_DP;
wire [6:0]  HEX3_D;
wire        HEX3_DP;
reg [9:0]   SW = 1;

wire [63:0] w_test_pass;

wire PS2_KBCLK;
wire PS2_KBDAT;

wire SD_DAT0;
wire SD_DAT3;
wire SD_CMD;
wire SD_CLK;
wire SD_WP_N;

// Memory system instance
memory_top memory(
  .i_clk(i_clk),
  .i_bus_data(w_output_bus_data),
  .i_bus_address(w_output_bus_address),
  .i_bus_DV(w_output_bus_DV),
  .i_bhw(w_output_bhw),
  .i_write_notread(w_output_write_notread),
  .o_bus_data(w_input_bus_data),
  .o_bus_DV(w_input_bus_DV),

  .SDRAM_B0(SDRAM_B0),
  .SDRAM_B1(SDRAM_B1),
  .SDRAM_DQMH(SDRAM_DQMH),
  .SDRAM_DQML(SDRAM_DQML),
  .SDRAM_WE(SDRAM_WE),
  .SDRAM_CAS(SDRAM_CAS),
  .SDRAM_RAS(SDRAM_RAS),
  .SDRAM_CS(SDRAM_CS),
  .SDRAM_CLK(SDRAM_CLK),
  .SDRAM_CKE(SDRAM_CKE),
  .SDRAM_A(SDRAM_A),
  .SDRAM_D(SDRAM_D),

  .i_gpu_address(w_gpu_address),
  .o_gpu_data(w_gpu_data),

  .o_hex(w_hex),

  .i_gpio_data(8'h00),
  .i_gpio_control(4'h0),
  .o_gpio_control(),

  .o_test_pass(w_test_pass),

  .i_ps2_clk(PS2_KBCLK),
  .i_ps2_data(PS2_KBDAT),

  .SD_DAT0(SD_DAT0),
  .SD_DAT3(SD_DAT3),
  .SD_CMD (SD_CMD),
  .SD_CLK (SD_CLK),
  .SD_WP_N(SD_WP_N),

  .o_sd_card_state(w_sd_card_state),

  .i_ack(w_ack),
  .o_interrupt(w_interrupt)
);

// ================================================================
// Debug Monitor Instance
// ================================================================
debug_monitor #()
u_debug_monitor (
    .i_clk(i_clk),
    .i_reset_n(i_debug_reset_n),
    
    // CPU signals - use o_IR for raw instruction, not o_instruction
    .i_PC(w_PC),
    .i_instruction(w_IR),  // w_IR is the raw 32-bit instruction
    
    // Memory interface signals
    .i_mem_address(w_output_bus_address),
    .i_mem_data(w_output_bus_data),
    .i_mem_DV(w_output_bus_DV),
    .i_mem_write(w_output_write_notread),
    
    // Debug output control
    .i_enable_debug(1'b1),
    .i_debug_verbosity(`DEBUG_VERBOSITY)
);

// Initialize memory with kernel data
initial begin
  // Wait a bit for reset to settle
  #100;

  // Set up the MIF file for the synth memories
  #1;

  #1000000;  // Run for a long time to allow OS boot

  $display("Simulation ended at time %t", $time);
  $finish;
end

// Monitor important signals (legacy output, kept for compatibility)
// Sample on negative edge to avoid race condition with memory_top
always @(negedge i_clk) begin
  if (w_output_bus_DV) begin
    $display("Time: %t, PC: %h, Addr: %h, Data: %h, Write: %b",
             $time, w_PC, w_output_bus_address, w_output_bus_data, w_output_write_notread);
  end
end

// Stop simulation if we detect a halt condition
integer cycle_count;
initial begin
  cycle_count = 0;
  forever begin
    @(posedge i_clk);
    cycle_count = cycle_count + 1;
    if (cycle_count > 10000000) begin  // Stop after 10M cycles if nothing interesting happens
      $display("Stopped after %d cycles", cycle_count);
      $finish;
    end
  end
end

endmodule