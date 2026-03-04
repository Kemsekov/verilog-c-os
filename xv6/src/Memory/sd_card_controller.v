// Simple SD card controller replacement for simulation
module sd_card_controller (
    input  wire       i_clk,
    input  wire [7:0] i_data,
    input  wire [11:0] i_address,
    input  wire       i_write,
    input  wire       i_request,
    output reg [7:0]  o_data,
    output reg        o_data_DV,

    inout              SD_DAT0,
    inout              SD_DAT3,
    inout              SD_CMD,
    output             SD_CLK,
    input              SD_WP_N,

    output reg [7:0]  o_sd_card_state
);

    // Simple memory to simulate SD card
    reg [7:0] sd_card_mem [0:4095]; // Small simulated SD card
    
    assign SD_CLK = i_clk;
    assign SD_DAT0 = 1'bz;
    assign SD_DAT3 = 1'bz;
    assign SD_CMD = 1'bz;

    initial begin
        o_sd_card_state = 8'h01; // Initialized state
    end

    always @(posedge i_clk) begin
        o_data_DV <= 1'b0;
        
        if (i_request) begin
            if (i_write) begin
                sd_card_mem[i_address] <= i_data;
            end else begin
                o_data <= sd_card_mem[i_address];
            end
            o_data_DV <= 1'b1;
        end
    end

endmodule