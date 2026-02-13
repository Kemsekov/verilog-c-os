module timer(
  input i_clk,
  input i_ack,
  output o_int
);

reg [31:0] r_cnt = 32'b0;

reg r_int = 1'b0;
assign o_int = r_int;

localparam THRESHOLD = 32'd50000; //5 milion for 1/10th second

always @(posedge i_clk) begin 
  r_int <= 1'b0;

  if(i_ack)
    r_cnt <= 32'b0;
  else if (r_cnt < THRESHOLD)
    r_cnt <= r_cnt + 32'd1;
  else 
    r_int <= 1'b1;

end


endmodule

