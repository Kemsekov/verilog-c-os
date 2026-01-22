// Simple Memory Controller for RISC-V Virtual System
// Implements basic RAM and ROM with memory mapping

module memory_controller (
    input clk,
    input rst_n,

    // CPU Interface
    input [31:0] cpu_addr,
    input [31:0] cpu_wdata,
    output reg [31:0] cpu_rdata,
    input [3:0] cpu_wstrb,
    input cpu_we,
    input cpu_re,
    output cpu_ready,

    // Program loader interface (takes priority during loading)
    input [31:0] prog_addr,
    input [31:0] prog_wdata,
    input prog_we,
    input prog_loading_done,

    // External memory interface (placeholder)
    output [31:0] ext_addr,
    output [31:0] ext_wdata,
    input [31:0] ext_rdata,
    output [3:0] ext_wstrb,
    output ext_we,
    output ext_re,
    input ext_ready
);

    // Memory map
    localparam RAM_BASE = 32'h0000_0000;
    localparam RAM_SIZE = 32'h0001_0000;  // 64KB
    localparam ROM_BASE = 32'h1000_0000;
    localparam ROM_SIZE = 32'h0001_0000;  // 64KB
    localparam UART_BASE = 32'h2000_0000;
    localparam UART_SIZE = 32'h0000_1000; // 4KB

    // Internal signals
    reg [31:0] ram [0:RAM_SIZE/4-1];
    reg [31:0] rom [0:ROM_SIZE/4-1];

    // UART registers
    reg [31:0] uart_data_reg;
    reg [31:0] uart_status_reg;

    // Address decoding
    wire cpu_in_ram = (cpu_addr >= RAM_BASE) && (cpu_addr < RAM_BASE + RAM_SIZE);
    wire cpu_in_rom = (cpu_addr >= ROM_BASE) && (cpu_addr < ROM_BASE + ROM_SIZE);
    wire cpu_in_uart = (cpu_addr >= UART_BASE) && (cpu_addr < UART_BASE + UART_SIZE);

    wire prog_in_ram = (prog_addr >= RAM_BASE) && (prog_addr < RAM_BASE + RAM_SIZE);

    // Memory access logic
    integer i;
    always @(posedge clk) begin
        if (rst_n == 0) begin
            // Initialize memory
            for (i = 0; i < RAM_SIZE/4; i = i + 1) begin
                ram[i] <= 32'h0000_0000;
            end
            // Initialize ROM with sample data (would be loaded from file in practice)
            for (i = 0; i < ROM_SIZE/4; i = i + 1) begin
                rom[i] <= {i[15:0], i[15:0]};
            end
            uart_data_reg <= 32'h0;
            uart_status_reg <= 32'h1;  // Ready
        end else begin
            // Priority given to program loader during loading phase
            if (prog_we && prog_in_ram && !prog_loading_done) begin
                // Program loader write - always write all 4 bytes since it's word-aligned
                ram[(prog_addr - RAM_BASE) >> 2][7:0] <= prog_wdata[7:0];
                ram[(prog_addr - RAM_BASE) >> 2][15:8] <= prog_wdata[15:8];
                ram[(prog_addr - RAM_BASE) >> 2][23:16] <= prog_wdata[23:16];
                ram[(prog_addr - RAM_BASE) >> 2][31:24] <= prog_wdata[31:24];
            end else if (cpu_we && cpu_ready && cpu_in_ram) begin
                // CPU write
                if (cpu_wstrb[0]) ram[(cpu_addr - RAM_BASE) >> 2][7:0] <= cpu_wdata[7:0];
                if (cpu_wstrb[1]) ram[(cpu_addr - RAM_BASE) >> 2][15:8] <= cpu_wdata[15:8];
                if (cpu_wstrb[2]) ram[(cpu_addr - RAM_BASE) >> 2][23:16] <= cpu_wdata[23:16];
                if (cpu_wstrb[3]) ram[(cpu_addr - RAM_BASE) >> 2][31:24] <= cpu_wdata[31:24];
            end

            if (cpu_we && cpu_ready && cpu_in_uart) begin
                case (cpu_addr)
                    UART_BASE: uart_data_reg <= cpu_wdata;  // Write to UART
                    UART_BASE + 4: uart_status_reg <= cpu_wdata;  // Status register
                endcase
            end
        end
    end

    // Handle reads
    always @(*) begin
        if (cpu_in_ram) begin
            cpu_rdata = ram[(cpu_addr - RAM_BASE) >> 2];
        end else if (cpu_in_rom) begin
            cpu_rdata = rom[(cpu_addr - ROM_BASE) >> 2];
        end else if (cpu_in_uart) begin
            case (cpu_addr)
                UART_BASE: cpu_rdata = uart_data_reg;  // Read from UART
                UART_BASE + 4: cpu_rdata = uart_status_reg;  // Status register
                default: cpu_rdata = 32'h0;
            endcase
        end else begin
            cpu_rdata = 32'h0;  // Default to 0 for unmapped addresses
        end
    end

    // Ready signal (memory is always ready in this simple implementation)
    assign cpu_ready = 1'b1;

    // External memory interface (not used in this simple implementation)
    assign ext_addr = cpu_addr;
    assign ext_wdata = cpu_wdata;
    assign ext_wstrb = cpu_wstrb;
    assign ext_we = cpu_we;
    assign ext_re = cpu_re;

endmodule