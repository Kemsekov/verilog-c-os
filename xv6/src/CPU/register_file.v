module register_file(i_clk, i_data, i_IR, i_load,
  o_regout1, o_regout2, o_regs);

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Ports
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

input        i_clk;
input        i_load;
input [31:0] i_data;
input [31:0] i_IR;
output [31:0] o_regout1;
output [31:0] o_regout2;
output [1023:0] o_regs;

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Combinational Logic
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

(* ramstyle = "logic" *) reg signed [31:0] regfile [0:31];
wire [4:0] w_select_regin = i_IR[11:7];
wire [4:0] w_select_regout1 = i_IR[19:15];
wire [4:0] w_select_regout2 = i_IR[24:20];

assign o_regout1 = (w_select_regout1 == 5'd0) ? 32'd0 : regfile[w_select_regout1];
assign o_regout2 = (w_select_regout2 == 5'd0) ? 32'd0 : regfile[w_select_regout2];

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Sequential Logic
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

always @(posedge i_clk) begin

  if (i_load && w_select_regin != 5'd0) begin
    regfile[w_select_regin] <= i_data;
  end

end

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Simulation Help
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

assign o_regs = {
    regfile[31], regfile[30], regfile[29], regfile[28],
    regfile[27], regfile[26], regfile[25], regfile[24],
    regfile[23], regfile[22], regfile[21], regfile[20],
    regfile[19], regfile[18], regfile[17], regfile[16],
    regfile[15], regfile[14], regfile[13], regfile[12],
    regfile[11], regfile[10], regfile[9],  regfile[8],
    regfile[7],  regfile[6],  regfile[5],  regfile[4],
    regfile[3],  regfile[2],  regfile[1],  regfile[0]
};

wire [31:0] reg0 = regfile[0];
wire [31:0] reg1 = regfile[1];
wire [31:0] reg2 = regfile[2];
wire [31:0] reg3 = regfile[3];
wire [31:0] reg4 = regfile[4];
wire [31:0] reg5 = regfile[5];
wire [31:0] reg6 = regfile[6];
wire [31:0] reg7 = regfile[7];
wire [31:0] reg8 = regfile[8];
wire [31:0] reg9 = regfile[9];
wire [31:0] reg10 = regfile[10];
wire [31:0] reg11 = regfile[11];
wire [31:0] reg12 = regfile[12];
wire [31:0] reg13 = regfile[13];
wire [31:0] reg14 = regfile[14];
wire [31:0] reg15 = regfile[15];
wire [31:0] reg16 = regfile[16];
wire [31:0] reg17 = regfile[17];
wire [31:0] reg18 = regfile[18];
wire [31:0] reg19 = regfile[19];
wire [31:0] reg20 = regfile[20];
wire [31:0] reg21 = regfile[21];
wire [31:0] reg22 = regfile[22];
wire [31:0] reg23 = regfile[23];
wire [31:0] reg24 = regfile[24];
wire [31:0] reg25 = regfile[25];
wire [31:0] reg26 = regfile[26];
wire [31:0] reg27 = regfile[27];
wire [31:0] reg28 = regfile[28];
wire [31:0] reg29 = regfile[29];
wire [31:0] reg30 = regfile[30];
wire [31:0] reg31 = regfile[31];


integer i = 32'd0;

initial begin

  for( i = 32'd0; i < 32'd32; i = i + 32'd1) begin
    regfile[i] <= 32'd0;
  end

end

endmodule

