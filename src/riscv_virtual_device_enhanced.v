// Enhanced Top-level RISC-V Virtual Device with Program Loader
// Combines the CPU core with memory controller, program loader, and basic peripherals

`include "riscv_defs.v"

module riscv_virtual_device_enhanced (
    input clk,
    input rst_n,

    // UART interface
    output uart_tx,
    input uart_rx,

    // Debug interface
    output [31:0] debug_pc,
    output loading_complete
);

    // Internal connections
    wire [31:0] interrupts;
    wire [31:0] pc_out;

    // Instantiate the virtual system (includes CPU, memory controller, and program loader)
    riscv_virtual_system u_system (
        .clk(clk),
        .rst_n(rst_n),

        // UART interface
        .uart_tx(uart_tx),
        .uart_rx(uart_rx),

        // Interrupts (all zeros for now)
        .interrupts(32'h0000_0000),

        // Debug
        .pc_out(pc_out)
    );

    // Pass through signals
    assign debug_pc = pc_out;
    assign loading_complete = u_system.loading_complete;  // Get the signal from the system module

endmodule