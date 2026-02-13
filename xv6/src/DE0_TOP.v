// --------------------------------------------------------------------
// Copyright (c) 2009 by Terasic Technologies Inc.
// --------------------------------------------------------------------
//
// Permission:
//
//   Terasic grants permission to use and modify this code for use
//   in synthesis for all Terasic Development Boards and Altera Development
//   Kits made by Terasic. Other use of this code, including the selling,
//   duplication, or modification of any portion is strictly prohibited.
//
// Disclaimer:
//
//   This VHDL/Verilog or C/C++ source code is intended as a design reference
//   which illustrates how these types of functions can be implemented.
//   It is the user's responsibility to verify their design for
//   consistency and functionality through the use of formal
//   verification methods. Terasic provides no warranty regarding the use
//   or functionality of this code.
//
// --------------------------------------------------------------------
//
//                     Terasic Technologies Inc
//                     356 Fu-Shin E. Rd Sec. 1. JhuBei City,
//                     HsinChu County, Taiwan
//                     302
//
//                     web: http://www.terasic.com/
//                     email: support@terasic.com
//
// --------------------------------------------------------------------
//
// Major Functions: DE0 TOP
//
// --------------------------------------------------------------------
//
// Revision History :
// --------------------------------------------------------------------
//   Ver  :| Author            :| Mod. Date :| Changes Made:
// --------------------------------------------------------------------

module DE0_TOP (
    CLOCK_50,
    CLOCK_50_2,
    BUTTON,
    SW,
    HEX0_D,
    HEX0_DP,
    HEX1_D,
    HEX1_DP,
    HEX2_D,
    HEX2_DP,
    HEX3_D,
    HEX3_DP,
    LEDG,
    UART_TXD,
    UART_RXD,
    UART_CTS,
    UART_RTS,
    DRAM_DQ,
    DRAM_ADDR,
    DRAM_LDQM,
    DRAM_UDQM,
    DRAM_WE_N,
    DRAM_CAS_N,
    DRAM_RAS_N,
    DRAM_CS_N,
    DRAM_BA_0,
    DRAM_BA_1,
    DRAM_CLK,
    DRAM_CKE,
    FL_DQ,
    FL_DQ15_AM1,
    FL_ADDR,
    FL_WE_N,
    FL_RST_N,
    FL_OE_N,
    FL_CE_N,
    FL_WP_N,
    FL_BYTE_N,
    FL_RY,
    LCD_BLON,
    LCD_RW,
    LCD_EN,
    LCD_RS,
    LCD_DATA,
    SD_DAT0,
    SD_DAT3,
    SD_CMD,
    SD_CLK,
    SD_WP_N,
    PS2_KBDAT,
    PS2_KBCLK,
    PS2_MSDAT,
    PS2_MSCLK,
    VGA_HS,
    VGA_VS,
    VGA_R,
    VGA_G,
    VGA_B,
    GPIO0_CLKIN,
    GPIO0_CLKOUT,
    GPIO0_D,
    GPIO1_CLKIN,
    GPIO1_CLKOUT,
    GPIO1_D
);

  ///////////// Clock Input //////////////////////////////////////////
  input CLOCK_50;  //  50 MHz
  input CLOCK_50_2;  //  50 MHz
  ///////////// Push Button //////////////////////////////////////////
  input [2:0] BUTTON;  //  Pushbutton[2:0]
  ///////////// DPDT Switch //////////////////////////////////////////
  input [9:0] SW;  //  Toggle Switch[9:0]
  ///////////// 7-SEG Dispaly ////////////////////////////////////////
  output [6:0] HEX0_D;  //  Seven Segment Digit 0
  output HEX0_DP;  //  Seven Segment Digit DP 0
  output [6:0] HEX1_D;  //  Seven Segment Digit 1
  output HEX1_DP;  //  Seven Segment Digit DP 1
  output [6:0] HEX2_D;  //  Seven Segment Digit 2
  output HEX2_DP;  //  Seven Segment Digit DP 2
  output [6:0] HEX3_D;  //  Seven Segment Digit 3
  output HEX3_DP;  //  Seven Segment Digit DP 3
  ///////////// LED //////////////////////////////////////////////////
  output [9:0] LEDG;  //  LED Green[9:0]

  ///////////// UART /////////////////////////////////////////////////
  output UART_TXD;  //  UART Transmitter
  input UART_RXD;  //  UART Receiver
  output UART_CTS;  //  UART Clear To Send
  input UART_RTS;  //  UART Request To Send
  ///////////// SDRAM Interface //////////////////////////////////////
  inout [15:0] DRAM_DQ;  //  SDRAM Data bus 16 Bits
  output [12:0] DRAM_ADDR;  //  SDRAM Address bus 13 Bits
  output DRAM_LDQM;  //  SDRAM Low-byte Data Mask
  output DRAM_UDQM;  //  SDRAM High-byte Data Mask
  output DRAM_WE_N;  //  SDRAM Write Enable
  output DRAM_CAS_N;  //  SDRAM Column Address Strobe
  output DRAM_RAS_N;  //  SDRAM Row Address Strobe
  output DRAM_CS_N;  //  SDRAM Chip Select
  output DRAM_BA_0;  //  SDRAM Bank Address 0
  output DRAM_BA_1;  //  SDRAM Bank Address 1
  output DRAM_CLK;  //  SDRAM Clock
  output DRAM_CKE;  //  SDRAM Clock Enable
  ///////////// Flash Interface //////////////////////////////////////
  inout [14:0] FL_DQ;  //  FLASH Data bus 15 Bits
  inout FL_DQ15_AM1;  //  FLASH Data bus Bit 15 or Address A-1
  output [21:0] FL_ADDR;  //  FLASH Address bus 22 Bits
  output FL_WE_N;  //  FLASH Write Enable
  output FL_RST_N;  //  FLASH Reset
  output FL_OE_N;  //  FLASH Output Enable
  output FL_CE_N;  //  FLASH Chip Enable
  output FL_WP_N;  //  FLASH Hardware Write Protect
  output FL_BYTE_N;  //  FLASH Selects 8/16-bit mode
  input FL_RY;  //  FLASH Ready/Busy
  ///////////// LCD Module 16X2 //////////////////////////////////////
  inout [7:0] LCD_DATA;  //  LCD Data bus 8 bits
  output LCD_BLON;  //  LCD Back Light ON/OFF
  output LCD_RW;  //  LCD Read/Write Select, 0 = Write, 1 = Read
  output LCD_EN;  //  LCD Enable
  output LCD_RS;  //  LCD Command/Data Select, 0 = Command, 1 = Data
  ///////////// SD Card Interface ////////////////////////////////////
  inout SD_DAT0;  //  SD Card Data 0
  inout SD_DAT3;  //  SD Card Data 3
  inout SD_CMD;  //  SD Card Command Signal
  output SD_CLK;  //  SD Card Clock
  input SD_WP_N;  //  SD Card Write Protect
  ///////////// PS2 //////////////////////////////////////////////////
  inout PS2_KBDAT;  //  PS2 Keyboard Data
  inout PS2_KBCLK;  //  PS2 Keyboard Clock
  inout PS2_MSDAT;  //  PS2 Mouse Data
  inout PS2_MSCLK;  //  PS2 Mouse Clock
  ///////////// VGA //////////////////////////////////////////////////
  output VGA_HS;  //  VGA H_SYNC
  output VGA_VS;  //  VGA V_SYNC
  output [3:0] VGA_R;  //  VGA Red[3:0]
  output [3:0] VGA_G;  //  VGA Green[3:0]
  output [3:0] VGA_B;  //  VGA Blue[3:0]
  ///////////// GPIO /////////////////////////////////////////////////
  input [1:0] GPIO0_CLKIN;  //  GPIO Connection 0 Clock In Bus
  output [1:0] GPIO0_CLKOUT;  //  GPIO Connection 0 Clock Out Bus
  inout [31:0] GPIO0_D;  //  GPIO Connection 0 Data Bus
  input [1:0] GPIO1_CLKIN;  //  GPIO Connection 1 Clock In Bus
  output [1:0] GPIO1_CLKOUT;  //  GPIO Connection 1 Clock Out Bus
  inout [31:0] GPIO1_D;  //  GPIO Connection 1 Data Bus

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  REG/WIRE declarations
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
`define SYNTH

  wire i_clk = CLOCK_50;
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

  wire [31:0] w_gpu_address;
  wire [7:0] w_gpu_data;

  wire [31:0] w_hex;

  wire [7:0] w_sd_card_state;

  wire w_interrupt;
  wire w_ack;
  wire w_s_interrupt;

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Structural coding
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  CPU_top cpu (
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
      .o_IR(w_IR),

      .i_plic_interrupt(w_interrupt),
      .o_plic_ack(w_ack),
      .o_s_interrupt(w_s_interrupt)
  );

  memory_top memory (
      .i_clk(i_clk),
      .i_bus_data(w_output_bus_data),
      .i_bus_address(w_output_bus_address),
      .i_bus_DV(w_output_bus_DV),
      .i_bhw(w_output_bhw),
      .i_write_notread(w_output_write_notread),
      .o_bus_data(w_input_bus_data),
      .o_bus_DV(w_input_bus_DV),

      .SDRAM_B0(DRAM_BA_0),
      .SDRAM_B1(DRAM_BA_1),
      .SDRAM_DQMH(DRAM_UDQM),
      .SDRAM_DQML(DRAM_LDQM),
      .SDRAM_WE(DRAM_WE_N),
      .SDRAM_CAS(DRAM_CAS_N),
      .SDRAM_RAS(DRAM_RAS_N),
      .SDRAM_CS(DRAM_CS_N),
      .SDRAM_CLK(DRAM_CLK),
      .SDRAM_CKE(DRAM_CKE),
      .SDRAM_A(DRAM_ADDR[11:0]),
      .SDRAM_D(DRAM_DQ),

      .i_gpu_address(w_gpu_address),
      .o_gpu_data(w_gpu_data),

      .o_hex(w_hex),

      .i_gpio_data(GPIO0_D[7:0]),
      .i_gpio_control(GPIO0_D[15:12]),
      .o_gpio_control(GPIO0_D[11:8]),

      .o_uart_gpio(GPIO0_D[16]),
      .i_uart_rx_gpio(GPIO0_D[17]),

      .i_ps2_clk (PS2_KBCLK),
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
  //defparam memory.bootloader.altsyncram_component.init_file = "../misc/bootloader.mif";
  //defparam memory.gpu.altsyncram_component.init_file = "../misc/GPUINIT.mif";

  mux_1024to32 regs_mux (
      .data_in(w_regs),
      .sel({SW[4], SW[3], SW[2], SW[1], SW[0]}),
      .data_out(w_reg)
  );

  wire [31:0] w_mux_print;
  mux_4to1 print_mux (
      .data_in0(w_PC),
      .data_in1(w_IR),
      .data_in2(w_hex),
      .data_in3(w_IR),
      .sel({SW[1], SW[0]}),
      .data_out(w_mux_print)
  );

  wire [31:0] w_print = SW[8] ? w_mux_print : w_reg;
  seven_segment_32bit print (
      .i_data(w_print),
      .i_mode(SW[9]),
      .o_hex3(HEX0_D),
      .o_hex2(HEX1_D),
      .o_hex1(HEX2_D),
      .o_hex0(HEX3_D)
  );

  assign LEDG[0] = w_state == 32'b0;
  assign LEDG[1] = w_state == 32'd1;
  assign LEDG[9] = w_state == 32'd2 || w_state == 32'd3;

  assign LEDG[6] = w_s_interrupt;
  assign LEDG[7] = w_interrupt;
  assign LEDG[8] = w_ack;

  localparam Init = 8'b0, Idle = 8'h01, Read = 8'h02, Write = 8'h03;
  assign LEDG[2] = w_sd_card_state == Init;
  assign LEDG[3] = w_sd_card_state == Idle;
  assign LEDG[4] = w_sd_card_state == Read;
  assign LEDG[5] = w_sd_card_state == Write;

  assign HEX0_DP = 1'b1;
  assign HEX1_DP = 1'b1;
  assign HEX2_DP = 1'b1;
  assign HEX3_DP = 1'b1;

endmodule
