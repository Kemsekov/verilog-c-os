// Simple SDRAM controller replacement for simulation
module sdram_controller (
    input  wire             i_clk,
    input  wire [7:0]       i_data,
    input  wire [22:0]      i_address,
    input  wire             i_wren,
    input  wire             i_request,
    output reg [7:0]        o_data,
    output reg              o_done,

    output wire             o_SDRAM_B0,
    output wire             o_SDRAM_B1,
    output wire             o_SDRAM_DQMH,
    output wire             o_SDRAM_DQML,
    output wire             o_SDRAM_WE,
    output wire             o_SDRAM_CAS,
    output wire             o_SDRAM_RAS,
    output wire             o_SDRAM_CS,
    output wire             o_SDRAM_CLK,
    output wire             o_SDRAM_CKE,
    output wire [11:0]      o_SDRAM_ADR,
    inout wire [15:0]       io_SDRAM_DATA
);

    // Simple memory to simulate SDRAM
    reg [7:0] sdram_mem [0:(1<<23)-1]; // 8MB simulated SDRAM
    
    assign o_SDRAM_B0 = 1'b0;
    assign o_SDRAM_B1 = 1'b0;
    assign o_SDRAM_DQMH = 1'b0;
    assign o_SDRAM_DQML = 1'b0;
    assign o_SDRAM_WE = 1'b0;
    assign o_SDRAM_CAS = 1'b0;
    assign o_SDRAM_RAS = 1'b0;
    assign o_SDRAM_CS = 1'b0;
    assign o_SDRAM_CLK = i_clk;
    assign o_SDRAM_CKE = 1'b1;
    assign o_SDRAM_ADR = i_address[11:0];
    assign io_SDRAM_DATA = 16'hZZZZ; // High impedance

    always @(posedge i_clk) begin
        o_done <= 1'b0;
        
        if (i_request) begin
            if (i_wren) begin
                sdram_mem[i_address] <= i_data;
            end else begin
                o_data <= sdram_mem[i_address];
            end
            o_done <= 1'b1;
        end
    end

endmodule