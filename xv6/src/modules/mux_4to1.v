module mux_4to1 (
    input [31:0] data_in0,  // 4-bit input
    input [31:0] data_in1,  // 4-bit input
    input [31:0] data_in2,  // 4-bit input
    input [31:0] data_in3,  // 4-bit input
    input [1:0] sel,      // 2-bit select signal
    output [31:0] data_out            // Output signal
);

// Single assign statement using conditional operator
assign data_out = (sel == 2'b00) ? data_in0 :
             (sel == 2'b01) ? data_in1 :
             (sel == 2'b10) ? data_in2 :
             (sel == 2'b11) ? data_in3 :
             1'b0; // Default case (optional)

endmodule
