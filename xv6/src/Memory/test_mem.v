module test_mem (
  input wire i_clk,
  input wire [7:0] i_data,
  input wire [11:0] i_address,
  input wire i_write,
  input wire i_request,
  output wire [7:0] o_data,
  output reg o_data_DV,
  output wire [63:0] o_test_pass
);

reg [7:0] mem [0:63];
reg [7:0] offset [0:3];

assign o_data = (i_address >= 32'd64 && i_address < 32'd67) ? offset[i_address - 32'd64] :
                (i_address < 32'd64) ? mem[i_address] :
                8'b0;

assign o_test_pass = {mem[63][0], mem[62][0], mem[61][0], mem[60][0],
                      mem[59][0], mem[58][0], mem[57][0], mem[56][0],
                      mem[55][0], mem[54][0], mem[53][0], mem[52][0],
                      mem[51][0], mem[50][0], mem[49][0], mem[48][0],
                      mem[47][0], mem[46][0], mem[45][0], mem[44][0],
                      mem[43][0], mem[42][0], mem[41][0], mem[40][0],
                      mem[39][0], mem[38][0], mem[37][0], mem[36][0],
                      mem[35][0], mem[34][0], mem[33][0], mem[32][0],
                      mem[31][0], mem[30][0], mem[29][0], mem[28][0],
                      mem[27][0], mem[26][0], mem[25][0], mem[24][0],
                      mem[23][0], mem[22][0], mem[21][0], mem[20][0],
                      mem[19][0], mem[18][0], mem[17][0], mem[16][0],
                      mem[15][0], mem[14][0], mem[13][0], mem[12][0],
                      mem[11][0], mem[10][0], mem[9][0],  mem[8][0],
                      mem[7][0],  mem[6][0],  mem[5][0],  mem[4][0],
                      mem[3][0],  mem[2][0],  mem[1][0],  mem[0][0]};


integer i;
initial begin
  for(i = 0; i < 32'd64; i = i + 1) begin
    mem[i] = 8'b0;
  end
  offset[0] = 8'b0;
  offset[1] = 8'b0;
  offset[2] = 8'b0;
  offset[3] = 8'b0;
end

always @(posedge i_clk) begin
  o_data_DV <= 1'b0;

    if (i_request) begin
        o_data_DV <= 1'b1;

        if (i_write && i_address >= 32'd64 && i_address < 32'd67) begin
            offset[i_address - 32'd64] <= i_data;
        end

        if (i_write && i_address < 32'd64) begin
            mem[i_address] <= i_data;
        end
    end
end

endmodule

