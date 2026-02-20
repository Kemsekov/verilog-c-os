module check_bhw_tb;
  reg [2:0] r_bhw = 3'b100;
  reg [7:0] r_mdr [0:3];
  wire [7:0] w_data_to_submodule = (r_bhw == 3'b100) ? r_mdr[0] :
                                   (r_bhw == 3'b011) ? r_mdr[1] :
                                   (r_bhw == 3'b010) ? r_mdr[2] :
                                   (r_bhw == 3'b001) ? r_mdr[3] :
                                   8'h00;
  initial begin
    r_mdr[0] = 8'h78;
    r_mdr[1] = 8'h56;
    r_mdr[2] = 8'h34;
    r_mdr[3] = 8'h12;
    $display("r_bhw=3'b100: w_data=%h (expected 78)", w_data_to_submodule);
    r_bhw = 3'b011;
    $display("r_bhw=3'b011: w_data=%h (expected 56)", w_data_to_submodule);
    r_bhw = 3'b010;
    $display("r_bhw=3'b010: w_data=%h (expected 34)", w_data_to_submodule);
    r_bhw = 3'b001;
    $display("r_bhw=3'b001: w_data=%h (expected 12)", w_data_to_submodule);
    $finish;
  end
endmodule
