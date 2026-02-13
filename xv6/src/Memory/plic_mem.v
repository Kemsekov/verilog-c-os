module plic_mem (
  input wire i_clk,
  input wire [7:0] i_data,
  input wire [23:0] i_address,
  input wire i_write,
  input wire i_request,
  output reg [7:0] o_data,
  output reg o_data_DV,

  input wire i_ps2_interrupt,

  input wire i_ack,
  output wire o_interrupt
);

reg [7:0] mem [0:3];

initial begin
  mem[0] = 8'd10;
  mem[1] = 8'd0;
  mem[2] = 8'd0;
  mem[3] = 8'd0;
end

always @(*) begin
  if (i_address == 23'h201004)
    o_data = mem[0];
  else if (i_address == 23'h201005)
    o_data = mem[1];
  else if (i_address == 23'h201006)
    o_data = mem[2];
  else if (i_address == 23'h201007)
    o_data = mem[3];
  else
    o_data = 8'b0;
end

reg r_interrupt = 1'b0;
assign o_interrupt = r_interrupt;

always @(posedge i_clk) begin
  o_data_DV <= 1'b0;

  if (i_ps2_interrupt) begin
    r_interrupt <= 1'b1;
  end
  if (i_ack) begin
    r_interrupt <= 1'b0;
  end

  if (i_request)
    o_data_DV <= 1'b1;
end

endmodule

