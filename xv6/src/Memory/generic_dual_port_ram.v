// Generic dual-port RAM to replace cache_altera_dualport
module cache_altera_dualport #(
    parameter DATA_WIDTH = 8,
    parameter ADDR_WIDTH = 10
) (
    input  wire                    i_clk,
    input  wire [DATA_WIDTH-1:0]   i_data,
    input  wire [ADDR_WIDTH-1:0]   i_address,
    input  wire                    i_write,
    input  wire                    i_request,
    output reg  [DATA_WIDTH-1:0]   o_data,
    output reg                     o_data_DV,

    // Port B: Read-Only
    input  wire [ADDR_WIDTH-1:0]   i_address_b,
    output reg  [DATA_WIDTH-1:0]   o_data_b
);

    // Memory array
    reg [DATA_WIDTH-1:0] mem [(1<<ADDR_WIDTH)-1:0];

    // Port A (Read/Write)
    always @(posedge i_clk) begin
        if (i_request) begin
            if (i_write) begin
                mem[i_address] <= i_data;
                o_data <= i_data;
            end else begin
                o_data <= mem[i_address];
            end
            o_data_DV <= 1'b1;
        end else begin
            o_data_DV <= 1'b0;
        end
    end

    // Port B (Read-Only)
    always @(posedge i_clk) begin
        o_data_b <= mem[i_address_b];
    end

endmodule