module mux_1024to32 (
    input [1023:0] data_in,  // 1024-bit input
    input [4:0] sel,         // 5-bit select signal (2^5 = 32 possible 32-bit slices)
    output reg [31:0] data_out   // 32-bit output
);

wire [31:0] data_0  = data_in[31:0];
wire [31:0] data_1  = data_in[63:32];
wire [31:0] data_2  = data_in[95:64];
wire [31:0] data_3  = data_in[127:96];
wire [31:0] data_4  = data_in[159:128];
wire [31:0] data_5  = data_in[191:160];
wire [31:0] data_6  = data_in[223:192];
wire [31:0] data_7  = data_in[255:224];
wire [31:0] data_8  = data_in[287:256];
wire [31:0] data_9  = data_in[319:288];
wire [31:0] data_10 = data_in[351:320];
wire [31:0] data_11 = data_in[383:352];
wire [31:0] data_12 = data_in[415:384];
wire [31:0] data_13 = data_in[447:416];
wire [31:0] data_14 = data_in[479:448];
wire [31:0] data_15 = data_in[511:480];
wire [31:0] data_16 = data_in[543:512];
wire [31:0] data_17 = data_in[575:544];
wire [31:0] data_18 = data_in[607:576];
wire [31:0] data_19 = data_in[639:608];
wire [31:0] data_20 = data_in[671:640];
wire [31:0] data_21 = data_in[703:672];
wire [31:0] data_22 = data_in[735:704];
wire [31:0] data_23 = data_in[767:736];
wire [31:0] data_24 = data_in[799:768];
wire [31:0] data_25 = data_in[831:800];
wire [31:0] data_26 = data_in[863:832];
wire [31:0] data_27 = data_in[895:864];
wire [31:0] data_28 = data_in[927:896];
wire [31:0] data_29 = data_in[959:928];
wire [31:0] data_30 = data_in[991:960];
wire [31:0] data_31 = data_in[1023:992];

always @(*) begin
    case (sel)
        5'd0:  data_out = data_0;
        5'd1:  data_out = data_1;
        5'd2:  data_out = data_2;
        5'd3:  data_out = data_3;
        5'd4:  data_out = data_4;
        5'd5:  data_out = data_5;
        5'd6:  data_out = data_6;
        5'd7:  data_out = data_7;
        5'd8:  data_out = data_8;
        5'd9:  data_out = data_9;
        5'd10: data_out = data_10;
        5'd11: data_out = data_11;
        5'd12: data_out = data_12;
        5'd13: data_out = data_13;
        5'd14: data_out = data_14;
        5'd15: data_out = data_15;
        5'd16: data_out = data_16;
        5'd17: data_out = data_17;
        5'd18: data_out = data_18;
        5'd19: data_out = data_19;
        5'd20: data_out = data_20;
        5'd21: data_out = data_21;
        5'd22: data_out = data_22;
        5'd23: data_out = data_23;
        5'd24: data_out = data_24;
        5'd25: data_out = data_25;
        5'd26: data_out = data_26;
        5'd27: data_out = data_27;
        5'd28: data_out = data_28;
        5'd29: data_out = data_29;
        5'd30: data_out = data_30;
        5'd31: data_out = data_31;
        default: data_out = 32'd0;  // Default case to prevent latch inference
    endcase
end

endmodule
