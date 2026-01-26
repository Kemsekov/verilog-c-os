// Enhanced Testbench for RISC-V Virtual Device
// Tests CPU, memory, and program loading functionality

`timescale 1ns/1ps

module riscv_virtual_device_enhanced_tb;

    reg clk;
    reg rst_n;

    // UART signals (for monitoring)
    wire uart_tx;
    reg uart_rx = 1'b1;  // Idle high

    // Debug signals
    wire [31:0] debug_pc;
    wire loading_complete;

    // Instantiate the enhanced device
    riscv_virtual_device_enhanced uut (
        .clk(clk),
        .rst_n(rst_n),
        .uart_tx(uart_tx),
        .uart_rx(uart_rx),
        .debug_pc(debug_pc),
        .loading_complete(loading_complete)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 10ns period = 100MHz
    end

    // Test sequence
    initial begin
        // Initialize
        rst_n = 0;
        $display("Starting RISC-V Virtual Device Test...");
        #100;
        rst_n = 1;

        // Wait for program loading to complete
        wait(loading_complete);
        $display("Program loading completed at time %0t", $time);

        // Run for a predetermined number of cycles
        #10000;

        $display("Test completed. Final PC: 0x%08h", debug_pc);
        $finish;
    end

    // Monitor key signals
    initial begin
        $monitor("Time: %0t, Loading Done: %b, PC: 0x%08h",
                 $time, loading_complete, debug_pc);
    end

    // Dump waves for viewing in waveform viewer
    initial begin
        $dumpfile("riscv_virtual_device_enhanced.vcd");
        $dumpvars(0, riscv_virtual_device_enhanced_tb);
    end

endmodule