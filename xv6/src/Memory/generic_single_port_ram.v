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
    output wire [DATA_WIDTH-1:0] o_data,
    output reg                   o_data_DV
);

    // Memory array
    reg [DATA_WIDTH-1:0] mem [(1<<ADDR_WIDTH)-1:0];

    // Initialize memory with file if specified
    initial begin
        if (INIT_FILE != "") begin
            $display("CACHE_ALTERA (generic): Loading initialization file: %s", INIT_FILE);
            $readmemh(INIT_FILE, mem);
        end else begin
            $display("CACHE_ALTERA (generic): No initialization file specified");
        end
    end

    // Combinational data output - data is available immediately
    assign o_data = mem[i_address];

    always @(posedge i_clk) begin
        o_data_DV <= 1'b0;
        if (i_request) begin
            o_data_DV <= 1'b1;
            if (i_write) begin
                mem[i_address] <= i_data;
            end
        end
    end

endmodule