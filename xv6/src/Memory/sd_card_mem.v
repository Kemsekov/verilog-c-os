module sd_card_mem (
    input wire i_clk,
    input wire [7:0] i_data,
    input wire [11:0] i_address,
    input wire i_write,
    input wire i_request,
    output wire [7:0] o_data,
    output reg o_data_DV,

    inout  SD_DAT0,
    inout  SD_DAT3,
    inout  SD_CMD,
    output SD_CLK,
    input  SD_WP_N,

    output [7:0] o_sd_card_state
);

  //Memory Wires
  wire w_wr = i_write && i_request && i_address < 12'd512;
  wire [7:0] w_data_mem;
  //Memory Wires

  //SDCARD WIRES
  reg [31:0] r_sd_card_address = 32'h00;  //512, 513, 514, 515
  wire [31:0] w_sd_card_address = r_sd_card_address;

  reg [7:0] r_sd_card_control = 8'h00;  //516
  wire [7:0] w_sd_card_control = r_sd_card_control;

  wire [7:0] w_data_from_mem_to_sd;
  wire [7:0] w_data_from_sd_to_mem;
  wire [31:0] w_addr_from_sd_to_mem;

  wire [7:0] o_statusreg;
  wire o_write_statusreg;

  wire o_sd_wr_nrd;
  wire o_req;
  //SDCARD WIRES

  assign o_data = (i_address < 12'd512)  ? w_data_mem :
                (i_address == 12'd512) ? r_sd_card_address[7:0] :
                (i_address == 12'd513) ? r_sd_card_address[15:8] :
                (i_address == 12'd514) ? r_sd_card_address[23:16] :
                (i_address == 12'd515) ? r_sd_card_address[31:24] :
                (i_address == 12'd516) ? r_sd_card_control :
                8'b0;


  always @(posedge i_clk) begin
    o_data_DV <= 1'b0;

    if (i_request) begin
      o_data_DV <= 1'b1;

      if (i_write) begin
        case (i_address)
          12'd512: r_sd_card_address[7:0] <= i_data;
          12'd513: r_sd_card_address[15:8] <= i_data;
          12'd514: r_sd_card_address[23:16] <= i_data;
          12'd515: r_sd_card_address[31:24] <= i_data;
          12'd516: r_sd_card_control <= i_data;
          default: ;
        endcase
      end
    end
    if (o_write_statusreg) begin
      r_sd_card_control <= 0;
    end
  end

  sd_card_controller m_sd_card (  //0-511
      .i_clk(i_clk),
      .i_addr(w_sd_card_address),
      .i_controlreg(w_sd_card_control),
      .i_data(w_data_from_mem_to_sd),
      .o_statusreg(o_statusreg),
      .o_write_statusreg(o_write_statusreg),
      .o_data(w_data_from_sd_to_mem),
      .o_addr(w_addr_from_sd_to_mem),
      .o_wr_nrd(o_sd_wr_nrd),
      .o_req(o_req),

      .io_SD_DAT0_DO(SD_DAT0),
      .io_SD_DAT3_nCS(SD_DAT3),
      .io_SD_CMD_DI(SD_CMD),
      .o_SD_CLK(SD_CLK),
      .i_SD_WP_N(SD_WP_N),

      .o_sd_card_state(o_sd_card_state)
  );

  my_dual_port #(
      .DATA(8),
      .ADDR(9)
  ) dual_port_mem (
      .a_clk (i_clk),
      .a_wr  (o_sd_wr_nrd),
      .a_addr(w_addr_from_sd_to_mem[8:0]),
      .a_din (w_data_from_sd_to_mem),
      .a_dout(w_data_from_mem_to_sd),


      .b_clk (i_clk),
      .b_wr  (w_wr),
      .b_addr(i_address[8:0]),
      .b_din (i_data),
      .b_dout(w_data_mem)
  );

endmodule
