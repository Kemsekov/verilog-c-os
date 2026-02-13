// Generic single-port RAM to replace cache_altera
module cache_altera #(
    parameter DATA_WIDTH = 8,
    parameter ADDR_WIDTH = 10,
    parameter INIT_FILE = ""
) (
    input  wire                  i_clk,
    input  wire [DATA_WIDTH-1:0] i_data,
    input  wire [ADDR_WIDTH-1:0] i_address,
    input  wire                  i_write,
    input  wire                  i_request,
    output reg [DATA_WIDTH-1:0]  o_data,
    output reg                   o_data_DV
);

    // Memory array
    reg [DATA_WIDTH-1:0] mem [(1<<ADDR_WIDTH)-1:0];

    // Initialize memory with file if specified
    initial begin
        if (INIT_FILE != "") begin
            $readmemh(INIT_FILE, mem);
        end
    end

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

endmodule