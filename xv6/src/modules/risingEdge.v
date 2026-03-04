module risingEdge (input sig,
  input clk,
  output pe);

reg   sig_dly;
assign pe = sig & ~sig_dly;

always @ (posedge clk) begin
  sig_dly <= sig;
end

endmodule

