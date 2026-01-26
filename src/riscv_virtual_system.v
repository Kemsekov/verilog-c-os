// RISC-V Virtual System Top Module
// Integrates the RISC-V core with memory and basic peripherals

`include "riscv_defs.v"

module riscv_virtual_system (
    input clk,
    input rst_n,

    // UART interface (simple)
    output uart_tx,
    input uart_rx,

    // Interrupts
    input [31:0] interrupts,

    // Memory interface
    output [31:0] mem_addr,
    output [31:0] mem_wdata,
    input [31:0] mem_rdata,
    output [3:0] mem_wstrb,
    output mem_we,
    output mem_re,
    input mem_ready,

    // System control
    output [31:0] pc_out,
    output loading_complete
);

    // Internal signals
    wire [31:0] core_mem_addr;
    wire [31:0] core_mem_wdata;
    wire [31:0] core_mem_rdata;
    wire [3:0] core_mem_wstrb;
    wire core_mem_we;
    wire core_mem_re;
    wire core_mem_ready;

    wire [31:0] core_interrupts;
    wire [31:0] core_pc_out;

    // Register monitoring signals
    wire [4:0]  core_rd0_idx;
    wire [31:0] core_rd0_value;
    wire        core_rd0_write_valid;

    // Memory interface signals for the core
    wire [31:0] core_mem_d_data_rd;
    wire core_mem_d_accept;
    wire core_mem_d_ack;
    wire core_mem_d_error;
    wire [10:0] core_mem_d_resp_tag;
    wire core_mem_i_accept;
    wire core_mem_i_valid;
    wire core_mem_i_error;
    wire [31:0] core_mem_i_inst;
    wire [31:0] core_reset_vector;
    wire [31:0] core_cpu_id;

    wire [31:0] core_mem_d_addr;
    wire [31:0] core_mem_d_data_wr;
    wire core_mem_d_rd;
    wire [3:0] core_mem_d_wr;
    wire core_mem_d_cacheable;
    wire [10:0] core_mem_d_req_tag;
    wire core_mem_d_invalidate;
    wire core_mem_d_writeback;
    wire core_mem_d_flush;
    wire core_mem_i_rd;
    wire core_mem_i_flush;
    wire core_mem_i_invalidate;
    wire [31:0] core_mem_i_pc;

    // Program loader signals
    wire [31:0] prog_load_addr;
    wire [31:0] prog_load_wdata;
    wire prog_load_we;
    wire prog_loading_done;

    // Program loader - loads program into memory at startup
    program_loader u_prog_loader (
        .clk(clk),
        .rst_n(rst_n),
        .mem_addr(prog_load_addr),
        .mem_wdata(prog_load_wdata),
        .mem_we(prog_load_we),
        .loading_done(prog_loading_done)
    );

    // Memory controller
    memory_controller u_memory_controller (
        .clk(clk),
        .rst_n(rst_n),

        // CPU Interface (from RISC-V core)
        .cpu_addr(core_mem_addr),
        .cpu_wdata(core_mem_wdata),
        .cpu_rdata(core_mem_rdata),
        .cpu_wstrb(core_mem_wstrb),
        .cpu_we(core_mem_we),
        .cpu_re(core_mem_re),
        .cpu_ready(core_mem_ready),

        // Program loader interface (takes priority during loading)
        .prog_addr(prog_load_addr),
        .prog_wdata(prog_load_wdata),
        .prog_we(prog_load_we),
        .prog_loading_done(prog_loading_done),

        // External memory interface (connected to module ports)
        .ext_addr(mem_addr),
        .ext_wdata(mem_wdata),
        .ext_rdata(mem_rdata),
        .ext_wstrb(mem_wstrb),
        .ext_we(mem_we),
        .ext_re(mem_re),
        .ext_ready(mem_ready)
    );

    // Instantiate the RISC-V core (using ultraembedded's core)
    riscv_core #(
        .SUPPORT_SUPER(1),
        .SUPPORT_MMU(0),
        .SUPPORT_MULDIV(1),
        .SUPPORT_LOAD_BYPASS(1),
        .SUPPORT_MUL_BYPASS(1),
        .SUPPORT_REGFILE_XILINX(0),
        .EXTRA_DECODE_STAGE(0),
        .MEM_CACHE_ADDR_MIN(32'h0000_0000),
        .MEM_CACHE_ADDR_MAX(32'h0000_FFFF)
    ) u_core (
        .clk_i(clk),
        .rst_i(~rst_n),  // Note: core uses active high reset

        // Memory interface - Data
        .mem_d_data_rd_i(core_mem_d_data_rd),
        .mem_d_accept_i(core_mem_d_accept),
        .mem_d_ack_i(core_mem_d_ack),
        .mem_d_error_i(core_mem_d_error),
        .mem_d_resp_tag_i(core_mem_d_resp_tag),

        // Memory interface - Instruction
        .mem_i_accept_i(core_mem_i_accept),
        .mem_i_valid_i(core_mem_i_valid),
        .mem_i_error_i(core_mem_i_error),
        .mem_i_inst_i(core_mem_i_inst),

        // Interrupts
        .intr_i(core_interrupts[0]),  // Use bit 0 for interrupt

        // Reset vector and CPU ID
        .reset_vector_i(core_reset_vector),
        .cpu_id_i(core_cpu_id),

        // Outputs - Data
        .mem_d_addr_o(core_mem_d_addr),
        .mem_d_data_wr_o(core_mem_d_data_wr),
        .mem_d_rd_o(core_mem_d_rd),
        .mem_d_wr_o(core_mem_d_wr),
        .mem_d_cacheable_o(core_mem_d_cacheable),
        .mem_d_req_tag_o(core_mem_d_req_tag),
        .mem_d_invalidate_o(core_mem_d_invalidate),
        .mem_d_writeback_o(core_mem_d_writeback),
        .mem_d_flush_o(core_mem_d_flush),

        // Outputs - Instruction
        .mem_i_rd_o(core_mem_i_rd),
        .mem_i_flush_o(core_mem_i_flush),
        .mem_i_invalidate_o(core_mem_i_invalidate),
        .mem_i_pc_o(core_mem_i_pc),

        // Register monitoring outputs
        .rd0_idx_o(core_rd0_idx),
        .rd0_value_o(core_rd0_value),
        .rd0_writeback_valid_o(core_rd0_write_valid)
    );

    // Connect core signals to external interface
    assign core_mem_d_data_rd = core_mem_rdata;
    assign core_mem_d_accept = 1'b1;  // Always accept
    assign core_mem_d_ack = core_mem_ready;
    assign core_mem_d_error = 1'b0;  // No errors in simple implementation
    assign core_mem_d_resp_tag = 11'h0;  // Dummy tag

    assign core_mem_i_accept = 1'b1;  // Always accept
    assign core_mem_i_valid = core_mem_ready;
    assign core_mem_i_error = 1'b0;  // No errors in simple implementation
    assign core_mem_i_inst = core_mem_rdata;

    assign core_reset_vector = 32'h0000_0000;  // Start at address 0
    assign core_cpu_id = 32'h0000_0000;  // Single core

    // Map core outputs to external interface
    assign core_mem_addr = core_mem_d_addr;  // Use data address for simplicity
    assign core_mem_wdata = core_mem_d_data_wr;
    assign core_mem_wstrb = core_mem_d_wr;
    assign core_mem_we = |core_mem_d_wr;  // Write enable if any byte is enabled
    assign core_mem_re = core_mem_d_rd;
    assign core_mem_ready = 1'b1;  // Always ready in simple implementation

    // Debug outputs
    assign core_pc_out = core_mem_i_pc;

    // Connect interrupts (simplified)
    assign core_interrupts = interrupts;

    // Output monitoring
    assign pc_out = core_pc_out;
    assign loading_complete = prog_loading_done;


endmodule