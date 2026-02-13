module seven_segment_32bit(
  input wire [31:0] i_data,
  input wire i_mode,
  output wire [6:0] o_hex0,
  output wire [6:0] o_hex1,
  output wire [6:0] o_hex2,
  output wire [6:0] o_hex3
);

wire [15:0] w_data = i_mode ? i_data[31:16] : i_data[15:0];

seven_segment_digit_interface seg0(
  .x3(w_data[15]), .x2(w_data[14]), .x1(w_data[13]),
  .x0(w_data[12]), .dot(1'b0), .en(1'b1), .dp(),
  .a(o_hex0[0]), .b(o_hex0[1]), .c(o_hex0[2]),
  .d(o_hex0[3]), .e(o_hex0[4]), .f(o_hex0[5]), .g(o_hex0[6]));

seven_segment_digit_interface seg1(
  .x3(w_data[11]), .x2(w_data[10]), .x1(w_data[9]),
  .x0(w_data[8]), .dot(1'b0), .en(1'b1), .dp(),
  .a(o_hex1[0]), .b(o_hex1[1]), .c(o_hex1[2]),
  .d(o_hex1[3]), .e(o_hex1[4]), .f(o_hex1[5]), .g(o_hex1[6]));

seven_segment_digit_interface seg2(
  .x3(w_data[7]), .x2(w_data[6]), .x1(w_data[5]),
  .x0(w_data[4]), .dot(1'b0), .en(1'b1), .dp(),
  .a(o_hex2[0]), .b(o_hex2[1]), .c(o_hex2[2]),
  .d(o_hex2[3]), .e(o_hex2[4]), .f(o_hex2[5]), .g(o_hex2[6]));

seven_segment_digit_interface seg3(
  .x3(w_data[3]), .x2(w_data[2]), .x1(w_data[1]),
  .x0(w_data[0]), .dot(1'b0), .en(1'b1), .dp(),
  .a(o_hex3[0]), .b(o_hex3[1]), .c(o_hex3[2]),
  .d(o_hex3[3]), .e(o_hex3[4]), .f(o_hex3[5]), .g(o_hex3[6]));

endmodule

