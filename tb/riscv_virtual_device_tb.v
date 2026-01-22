// Testbench for RISC-V Virtual Device
// Tests basic CPU and memory functionality

`timescale 1ns/1ps

module riscv_virtual_device_tb;

    reg clk;
    reg rst_n;
    
    // UART signals (for monitoring)
    wire uart_tx;
    reg uart_rx = 1'b1;  // Idle high
    
    // Debug signals
    wire [31:0] debug_pc;
    wire debug_halted;
    
    // Instantiate the device
    riscv_virtual_device uut (
        .clk(clk),
        .rst_n(rst_n),
        .uart_tx(uart_tx),
        .uart_rx(uart_rx),
        .debug_pc(debug_pc),
        .debug_halted(debug_halted)
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
        #100;
        rst_n = 1;
        #1000;  // Run for a while
        
        // Monitor for a few cycles
        repeat(1000) begin
            #10;
            if (debug_halted) begin
                $display("CPU halted at PC: 0x%08h", debug_pc);
                break;
            end
        end
        
        // End simulation
        #1000;
        $display("Test completed.");
        $finish;
    end
    
    // Monitor key signals
    initial begin
        $monitor("Time: %0t, PC: 0x%08h, Halted: %b", $time, debug_pc, debug_halted);
    end
    
    // Dump waves for viewing in waveform viewer
    initial begin
        $dumpfile("riscv_virtual_device.vcd");
        $dumpvars(0, riscv_virtual_device_tb);
    end

endmodule