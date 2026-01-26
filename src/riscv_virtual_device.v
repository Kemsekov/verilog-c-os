// Top-level RISC-V Virtual Device
// Combines the CPU core with memory controller and basic peripherals

`include "riscv_defs.v"

module riscv_virtual_device (
    input clk,
    input rst_n,

    // UART interface
    output uart_tx,
    input uart_rx,

    // Debug interface
    output [31:0] debug_pc,
    output debug_halted
);

    // Internal connections
    wire [31:0] mem_addr;
    wire [31:0] mem_wdata;
    wire [31:0] mem_rdata;
    wire [3:0] mem_wstrb;
    wire mem_we;
    wire mem_re;
    wire mem_ready;

    wire [31:0] interrupts;
    wire [31:0] pc_out;

    // Instantiate the virtual system
    riscv_virtual_system u_system (
        .clk(clk),
        .rst_n(rst_n),

        // Memory interface
        .mem_addr(mem_addr),
        .mem_wdata(mem_wdata),
        .mem_rdata(mem_rdata),
        .mem_wstrb(mem_wstrb),
        .mem_we(mem_we),
        .mem_re(mem_re),
        .mem_ready(mem_ready),

        // UART interface
        .uart_tx(uart_tx),
        .uart_rx(uart_rx),

        // Interrupts (all zeros for now)
        .interrupts(32'h0000_0000),

        // Debug
        .pc_out(pc_out)
    );

    // Instantiate the memory controller
    memory_controller u_memory (
        .clk(clk),
        .rst_n(rst_n),

        // CPU Interface
        .cpu_addr(mem_addr),
        .cpu_wdata(mem_wdata),
        .cpu_rdata(mem_rdata),
        .cpu_wstrb(mem_wstrb),
        .cpu_we(mem_we),
        .cpu_re(mem_re),
        .cpu_ready(mem_ready),

        // External memory interface (not used in this simple implementation)
        .ext_addr(),
        .ext_wdata(),
        .ext_rdata(32'h0),
        .ext_wstrb(),
        .ext_we(),
        .ext_re(),
        .ext_ready(1'b1)
    );

    // Debug outputs
    assign debug_pc = pc_out;
    assign debug_halted = 1'b0;  // No halt detection anymore

endmodule