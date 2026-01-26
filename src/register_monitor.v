// Register Monitor for RISC-V Virtual Device
// Monitors and captures register values, particularly the return value in register x10 (a0)

`include "riscv_defs.v"

module register_monitor (
    input clk,
    input rst_n,

    // Signals from the RISC-V core indicating register writes
    input [4:0]  rd_addr,
    input [31:0] rd_value,
    input        rd_write_enable,

    // Output: captured return value from register x10 (a0)
    output reg [31:0] captured_return_value
);

    reg [31:0] x10_value;  // Value of register x10 (a0)
    reg        x10_updated;  // Flag to indicate x10 was updated

    always @(posedge clk) begin
        if (!rst_n) begin
            x10_value <= 32'h0;
            x10_updated <= 1'b0;
            captured_return_value <= 32'h0;
        end else begin
            // Monitor register writes
            if (rd_write_enable && rd_addr == 5'd10) begin  // Register x10 (a0)
                x10_value <= rd_value;
                x10_updated <= 1'b1;
                captured_return_value <= rd_value;  // Update captured value continuously
            end
        end
    end

endmodule