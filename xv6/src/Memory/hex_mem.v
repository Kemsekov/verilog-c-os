module hex_mem (
  input wire i_clk,
  input wire [7:0] i_data,
  input wire [11:0] i_address,
  input wire i_write,
  input wire i_request,
  output wire [7:0] o_data,
  output reg o_data_DV,
  output wire [31:0] o_hex_display
);

reg [7:0] mem [0:3];

assign o_data = (i_address < 4) ? mem[i_address] : 8'b0;
assign o_hex_display = {mem[3], mem[2], mem[1], mem[0]};

initial begin
    mem[0] = 8'b0;
    mem[1] = 8'b0;
    mem[2] = 8'b0;
    mem[3] = 8'b0;
end

always @(posedge i_clk) begin
  o_data_DV <= 1'b0;

    if (i_request) begin
        o_data_DV <= 1'b1;

        if (i_write && i_address < 4) begin
            mem[i_address] <= i_data;
        end
    end
end

endmodule

