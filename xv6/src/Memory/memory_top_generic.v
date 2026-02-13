`define SIMULATION
// Simplified memory_top for Icarus Verilog simulation
module memory_top (
    input              i_clk,
    input       [31:0] i_bus_data,
    input       [31:0] i_bus_address,
    input              i_bus_DV,
    input       [ 2:0] i_bhw,
    input              i_write_notread,
    output      [31:0] o_bus_data,
    output             o_bus_DV,
    output wire        SDRAM_B0,
    output wire        SDRAM_B1,
    output wire        SDRAM_DQMH,
    output wire        SDRAM_DQML,
    output wire        SDRAM_WE,
    output wire        SDRAM_CAS,
    output wire        SDRAM_RAS,
    output wire        SDRAM_CS,
    output wire        SDRAM_CLK,
    output wire        SDRAM_CKE,
    output wire [11:0] SDRAM_A,
    inout  wire [15:0] SDRAM_D,

    input  [31:0] i_gpu_address,
    output [ 7:0] o_gpu_data,

    output [31:0] o_hex,

    input  [7:0] i_gpio_data,
    input  [3:0] i_gpio_control,
    output [3:0] o_gpio_control,

    output  o_uart_gpio,
    input   i_uart_rx_gpio,

    output [63:0] o_test_pass,

    input i_ps2_clk,
    input i_ps2_data,

    inout  SD_DAT0,
    inout  SD_DAT3,
    inout  SD_CMD,
    output SD_CLK,
    input  SD_WP_N,

    output [7:0] o_sd_card_state,

    input wire i_ack,
    output wire o_interrupt
);

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Global wires and regs
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  // input registers
  reg  [ 7:0] r_mdr                             [3:0];  // Memory Data Register
  reg  [31:0] r_mar;  // Memory Address Register
  reg  [ 2:0] r_bhw;  // Byte-Half-Word
  reg         r_write;  // Write/Not_Read
  reg         r_send = 1'b0;
  reg  [ 1:0] r_counter;

  wire [31:0] w_mar;  // Memory Address Register
  wire        w_write;  // Write/Not_Read

  reg  [ 7:0] r_mdr_out                         [3:0];  // Memory Data Register
  assign o_bus_data = {r_mdr_out[3], r_mdr_out[2], r_mdr_out[1], r_mdr_out[0]};
  assign o_bus_DV   = r_send;
  assign w_mar      = r_mar;
  assign w_write    = r_write;
  // input registers

  // SDRAM wires and regs
  wire w_sdram_DV;
  wire w_sdram_receive;
  wire [7:0] w_sdram_data_byte;
  // SDRAM wires and regs

  // Bootloader wires and regs
  wire w_bootloader_DV = 1'b0;
  wire w_bootloader_receive = 1'b0;
  wire [7:0] w_bootloader_data_byte = 8'b0;
  // Bootloader wires and regs

  // GPU wires and regs
  wire w_gpu_DV;
  wire w_gpu_receive;
  wire [7:0] w_gpu_data_byte;
  // GPU wires and regs

  // HEX wires and regs
  wire w_hex_DV;
  wire w_hex_receive;
  wire [7:0] w_hex_data_byte;
  // HEX wires and regs

  // GPIO wires and regs
  wire w_gpio_DV;
  wire w_gpio_receive;
  wire [7:0] w_gpio_data_byte;
  // GPIO wires and regs

  // PS2 wires and regs
  wire w_ps2_DV;
  wire w_ps2_receive;
  wire [7:0] w_ps2_data_byte;
  // PS2 wires and regs

  // PS2 wires and regs
  wire w_test_DV;
  wire w_test_receive;
  wire [7:0] w_test_data_byte;
  // PS2 wires and regs

  // SD_CARD wires and regs
  wire w_sd_card_DV;
  wire w_sd_card_receive;
  wire [7:0] w_sd_card_data_byte;
  // SD_CARD wires and regs

  // xv6 wires and regs
  wire w_xv6_DV;
  wire w_xv6_receive;
  wire [7:0] w_xv6_data_byte;
  // xv6 wires and regs

  // uart wires and regs
  wire w_uart_DV;
  wire w_uart_receive;
  wire [7:0] w_uart_data_byte;
  // uart wires and regs

  // plic wires and regs
  wire w_plic_DV;
  wire w_plic_receive;
  wire [7:0] w_plic_data_byte;
  // plic wires and regs

  // synth_32 wires and regs
  wire w_synth_32_DV;
  wire w_synth_32_receive;
  wire [7:0] w_synth_32_data_byte;
  // synth_32 wires and regs

  // synth_16 wires and regs
  wire w_synth_16_DV;
  wire w_synth_16_receive;
  wire [7:0] w_synth_16_data_byte;
  // synth_16 wires and regs

  // Global wires and regs
  wire [7:0] w_read_data;  //This register holds data read from submodule that is currently selected
  assign w_read_data = (w_bootloader_receive & w_bootloader_DV) ? w_bootloader_data_byte :
                     (w_sdram_receive & w_sdram_DV) ? w_sdram_data_byte :
                     (w_gpu_receive & w_gpu_DV) ? w_gpu_data_byte :
                     (w_hex_receive & w_hex_DV) ? w_hex_data_byte :
                     (w_gpio_receive & w_gpio_DV) ? w_gpio_data_byte :
                     (w_ps2_receive & w_ps2_DV) ? w_ps2_data_byte :
                     (w_test_receive & w_test_DV) ? w_test_data_byte :
                     (w_sd_card_receive & w_sd_card_DV) ? w_sd_card_data_byte :
                     (w_xv6_receive & w_xv6_DV) ? w_xv6_data_byte :
                     (w_uart_receive & w_uart_DV) ? w_uart_data_byte :
                     (w_plic_receive & w_plic_DV) ? w_plic_data_byte :
                     (w_synth_32_receive & w_synth_32_DV) ? w_synth_32_data_byte :
                     (w_synth_16_receive & w_synth_16_DV) ? w_synth_16_data_byte :
                     8'h00;

  wire w_global_receive;
  assign w_global_receive = w_bootloader_receive |
                          w_sdram_receive |
                          w_gpu_receive |
                          w_hex_receive |
                          w_gpio_receive |
                          w_ps2_receive |
                          w_test_receive |
                          w_sd_card_receive |
                          w_xv6_receive |
                          w_uart_receive |
                          w_plic_receive |
                          w_synth_32_receive |
                          w_synth_16_receive;

  // global data to submodule
  wire [7:0] w_data_to_submodule;
  assign w_data_to_submodule = (r_bhw == 3'b100) ? r_mdr[0] :
                             (r_bhw == 3'b011) ? r_mdr[1] :
                             (r_bhw == 3'b010) ? r_mdr[2] :
                             (r_bhw == 3'b001) ? r_mdr[3] :
                             8'h00;

  // global request to submodule
  reg r_request = 1'b0;

  reg status = 1'b0;
  localparam integer WAITING = 1'b0;
  localparam integer FETCHING = 1'b1;

  reg sub_status = 1'b0;
  localparam integer TOSEND = 1'b0;
  localparam integer WAITINGFORRESPONSE = 1'b1;

  wire w_ps2_interrupt_DV;
  wire [7:0] w_ps2_interrupt_data;

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Memory Map
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  memory_map memory_map (
      .i_address(w_mar),
      .o_bootloader_DV(w_bootloader_DV),
      .o_sdram_DV(w_sdram_DV),
      .o_gpu_DV(w_gpu_DV),
      .o_ps2_DV(w_ps2_DV),
      .o_gpio_DV(w_gpio_DV),
      .o_hex_DV(w_hex_DV),
      .o_test_DV(w_test_DV),
      .o_sd_card_DV(w_sd_card_DV),
      .o_xv6_DV(w_xv6_DV),
      .o_uart_DV(w_uart_DV),
      .o_plic_DV(w_plic_DV),
      .o_synth_32_DV(w_synth_32_DV),
      .o_synth_16_DV(w_synth_16_DV)
  );

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Cache/Bootloader Fast Memory
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  // Use generic memory instead of Altera-specific one
  cache_altera #(
      .DATA_WIDTH(8),
      .ADDR_WIDTH(16)
  ) bootloader (
      .i_clk(i_clk),
      .i_data(w_data_to_submodule),
      .i_address(w_mar[15:0]),
      .i_write(w_write),
      .i_request(w_bootloader_DV & r_request),
      .o_data(w_bootloader_data_byte),
      .o_data_DV(w_bootloader_receive)
  );

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Memory For Interfacing Raspberry Pie Pico
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  SDRAM Controller
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  // Use generic SDRAM controller instead of Altera-specific one
  sdram_controller sdram (
      .i_clk(i_clk),
      .i_data(w_data_to_submodule),
      .i_address(w_mar[22:0]),
      .i_wren(w_write & w_sdram_DV & r_request),
      .i_request(w_sdram_DV & r_request),
      .o_data(w_sdram_data_byte),
      .o_done(w_sdram_receive),

      .o_SDRAM_B0(SDRAM_B0),
      .o_SDRAM_B1(SDRAM_B1),
      .o_SDRAM_DQMH(SDRAM_DQMH),
      .o_SDRAM_DQML(SDRAM_DQML),
      .o_SDRAM_WE(SDRAM_WE),
      .o_SDRAM_CAS(SDRAM_CAS),
      .o_SDRAM_RAS(SDRAM_RAS),
      .o_SDRAM_CS(SDRAM_CS),
      .o_SDRAM_CLK(SDRAM_CLK),
      .o_SDRAM_CKE(SDRAM_CKE),
      .o_SDRAM_ADR(SDRAM_A),
      .io_SDRAM_DATA(SDRAM_D)
  );

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Memory Dedicated For Test Registers
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  test_mem test_mem (
      .i_clk(i_clk),
      .i_data(w_data_to_submodule),
      .i_address(w_mar[11:0]),
      .i_write(w_write),
      .i_request(w_test_DV & r_request),
      .o_data(w_test_data_byte),
      .o_data_DV(w_test_receive),

      .o_test_pass(o_test_pass)
  );

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  SD_CARD Memory
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  // Use generic SD card controller instead of Altera-specific one
  sd_card_controller sd_card (
      .i_clk(i_clk),
      .i_data(w_data_to_submodule),
      .i_address(w_mar[11:0]),
      .i_write(w_write),
      .i_request(w_sd_card_DV & r_request),
      .o_data(w_sd_card_data_byte),
      .o_data_DV(w_sd_card_receive),

      .SD_DAT0(SD_DAT0),
      .SD_DAT3(SD_DAT3),
      .SD_CMD (SD_CMD),
      .SD_CLK (SD_CLK),
      .SD_WP_N(SD_WP_N),

      .o_sd_card_state(o_sd_card_state)
  );

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  PLIC Memory
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  plic_mem plic_mem (
      .i_clk(i_clk),
      .i_data(w_data_to_submodule),
      .i_address(w_mar[31:0]),
      .i_write(w_write),
      .i_request(w_plic_DV & r_request),
      .o_data(w_plic_data_byte),
      .o_data_DV(w_plic_receive),

      .i_ps2_interrupt(w_ps2_interrupt_DV),

      .i_ack(i_ack),
      .o_interrupt(o_interrupt)
  );

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  XV6 Simulation Memory
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==


  cache_altera #(
      .DATA_WIDTH(8),
      .ADDR_WIDTH(15),
      .INIT_FILE("../tools/xv6_kernel.hex")
  ) synth_32_mem (
      .i_clk(i_clk),
      .i_data(w_data_to_submodule),
      .i_address(w_mar[14:0]),
      .i_write(w_write),
      .i_request(w_synth_32_DV & r_request),
      .o_data(w_synth_32_data_byte),
      .o_data_DV(w_synth_32_receive)
  );

  cache_altera #(
      .DATA_WIDTH(8),
      .ADDR_WIDTH(14),
      .INIT_FILE("")
  ) synth_16_mem (
      .i_clk(i_clk),
      .i_data(w_data_to_submodule),
      .i_address(w_mar[13:0]),
      .i_write(w_write),
      .i_request(w_synth_16_DV & r_request),
      .o_data(w_synth_16_data_byte),
      .o_data_DV(w_synth_16_receive)
  );

  uart m_uart (
      .i_clk(i_clk),
      .i_data(w_data_to_submodule),
      .i_address(w_mar[2:0]),
      .i_write(w_write),
      .i_request(w_uart_DV & r_request),
      .o_data(w_uart_data_byte),
      .o_data_DV(w_uart_receive),

      .o_uart_gpio(o_uart_gpio),

      .i_ps2_data(w_ps2_interrupt_data),
      .i_ps2_DV(w_ps2_interrupt_DV)
  );


  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Sequential Logic
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  always @(posedge i_clk) begin
    r_request <= 1'b0;
    r_send <= 1'b0;
    if (status == WAITING && i_bus_DV) begin
      if (i_bhw == 3'b100) begin
        r_mdr[0] <= i_bus_data[7:0];
        r_mdr[1] <= i_bus_data[15:8];
        r_mdr[2] <= i_bus_data[23:16];
        r_mdr[3] <= i_bus_data[31:24];
      end
      if (i_bhw == 3'b010) begin
        r_mdr[0] <= 8'b0;
        r_mdr[1] <= 8'b0;
        r_mdr[2] <= i_bus_data[7:0];
        r_mdr[3] <= i_bus_data[15:8];
      end
      if (i_bhw == 3'b001) begin
        r_mdr[0] <= 8'b0;
        r_mdr[1] <= 8'b0;
        r_mdr[2] <= 8'b0;
        r_mdr[3] <= i_bus_data[7:0];
      end
      r_mdr_out[0] <= 8'b0;
      r_mdr_out[1] <= 8'b0;
      r_mdr_out[2] <= 8'b0;
      r_mdr_out[3] <= 8'b0;
      r_mar <= i_bus_address;
      r_bhw <= i_bhw;
      r_write <= i_write_notread;
      status <= FETCHING;
      r_counter <= 2'b00;
    end else if (status == FETCHING && r_bhw != 3'b000) begin
      if (sub_status == TOSEND) begin
        r_request  <= 1'b1;
        sub_status <= WAITINGFORRESPONSE;
      end else if (sub_status == WAITINGFORRESPONSE && w_global_receive) begin
        r_mar <= r_mar + 1;
        r_counter <= r_counter + 1;
        sub_status <= TOSEND;
        r_bhw = r_bhw - 1;  // It is important that this is Blocking assignment
        if (!w_write) r_mdr_out[r_counter] <= w_read_data;
        if (r_bhw == 3'b000) begin
          r_send <= 1'b1;
          status <= WAITING;
        end
      end
    end

  end


endmodule