module check_lui_tb;
  reg [31:0] i_IR = 32'h123450b7;
  wire signed [31:0] w_se_immedLUI = {i_IR[31:12], {12{1'd0}}};
  
  initial begin
    $display("IR = 0x%08h", i_IR);
    $display("IR[31:12] = 0x%05h", i_IR[31:12]);
    $display("w_se_immedLUI = 0x%08h", w_se_immedLUI);
    $finish;
  end
endmodule
