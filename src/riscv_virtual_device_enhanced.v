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
    output debug_halted,
    output loading_complete
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
    wire halted;
    
    // Program loader signals
    wire [31:0] prog_load_addr;
    wire [31:0] prog_load_data;
    wire prog_load_we;
    wire prog_loading_done;
    
    // Memory multiplexer between CPU and program loader
    wire [31:0] final_mem_addr;
    wire [31:0] final_mem_wdata;
    wire [3:0] final_mem_wstrb;
    wire final_mem_we;
    wire final_mem_re;
    
    // During program loading, use loader; otherwise use CPU
    assign final_mem_addr = prog_loading_done ? mem_addr : prog_load_addr;
    assign final_mem_wdata = prog_load_data;
    assign final_mem_wstrb = 4'b1111;  // Always write all bytes during loading
    assign final_mem_we = prog_loading_done ? mem_we : prog_load_we;
    assign final_mem_re = prog_loading_done ? mem_re : 1'b0;  // Don't read during loading
    
    // Instantiate the program loader
    program_loader u_loader (
        .clk(clk),
        .rst_n(rst_n),
        .mem_addr(prog_load_addr),
        .mem_wdata(prog_load_data),
        .mem_we(prog_load_we),
        .loading_done(prog_loading_done)
    );
    
    // Instantiate the virtual system
    riscv_virtual_system u_system (
        .clk(clk),
        .rst_n(rst_n & prog_loading_done),  // Hold CPU in reset until program is loaded
        
        // Memory interface - goes through multiplexer
        .mem_addr(final_mem_addr),
        .mem_wdata(final_mem_wdata),
        .mem_rdata(mem_rdata),
        .mem_wstrb(final_mem_wstrb),
        .mem_we(final_mem_we),
        .mem_re(final_mem_re),
        .mem_ready(mem_ready),
        
        // UART interface
        .uart_tx(uart_tx),
        .uart_rx(uart_rx),
        
        // Interrupts (all zeros for now)
        .interrupts(32'h0000_0000),
        
        // Debug
        .pc_out(pc_out),
        .halted(halted)
    );
    
    // Instantiate the memory controller
    memory_controller u_memory (
        .clk(clk),
        .rst_n(rst_n),
        
        // CPU Interface
        .cpu_addr(final_mem_addr),
        .cpu_wdata(final_mem_wdata),
        .cpu_rdata(mem_rdata),
        .cpu_wstrb(final_mem_wstrb),
        .cpu_we(final_mem_we),
        .cpu_re(final_mem_re),
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
    assign debug_halted = halted;
    assign loading_complete = prog_loading_done;

endmodule