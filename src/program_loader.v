// Program loader for RISC-V Virtual Device
// Loads programs into memory at startup

module program_loader (
    input clk,
    input rst_n,

    // Memory interface
    output [31:0] mem_addr,
    output [31:0] mem_wdata,
    output mem_we,

    // Control
    output reg loading_done
);

    // Program counter for loading
    reg [31:0] load_addr;
    reg [31:0] load_data;
    reg [31:0] rom_addr;

    // State machine
    reg [1:0] current_state;
    reg [1:0] next_state;

    parameter IDLE = 2'b00;
    parameter LOADING = 2'b01;
    parameter DONE = 2'b10;

    // ROM with sample program (would be replaced with actual program)
    reg [31:0] program_rom [0:1023];  // 4KB of program storage

    integer i;
    // Initialize ROM with a simple program (add immediate to register)
    initial begin
        program_rom[0] = 32'h00100093;  // addi x1, x0, 1  (x1 = 1)
        program_rom[1] = 32'h00200113;  // addi x2, x0, 2  (x2 = 2)
        program_rom[2] = 32'h002081b3;  // add x3, x1, x2  (x3 = x1 + x2 = 3)
        program_rom[3] = 32'h00300213;  // addi x4, x0, 3  (x4 = 3)
        program_rom[4] = 32'h0000006f;  // jal x0, 0 (infinite loop)

        // Fill rest with NOPs
        for (i = 5; i < 1024; i = i + 1) begin
            program_rom[i] = 32'h00000013;  // nop (addi x0, x0, 0)
        end
    end

    // State machine logic
    always @(posedge clk) begin
        if (!rst_n) begin
            current_state <= IDLE;
            load_addr <= 32'h0000_0000;
            rom_addr <= 32'h0000_0000;
            loading_done <= 1'b0;
        end else begin
            current_state <= next_state;

            case (current_state)
                IDLE: begin
                    load_addr <= 32'h0000_0000;  // Start loading at address 0
                    rom_addr <= 32'h0000_0000;
                    loading_done <= 1'b0;
                end

                LOADING: begin
                    load_addr <= load_addr + 4;  // Increment by 4 bytes (word-aligned)
                    rom_addr <= rom_addr + 1;

                    if (rom_addr >= 1023) begin  // Reached end of program
                        loading_done <= 1'b1;
                    end
                end

                DONE: begin
                    // Stay in done state
                end
                default: begin
                    current_state <= IDLE;
                end
            endcase
        end
    end

    // Next state logic
    always @(*) begin
        case (current_state)
            IDLE: next_state = LOADING;
            LOADING: next_state = (rom_addr >= 1023) ? DONE : LOADING;
            DONE: next_state = DONE;
            default: next_state = IDLE;
        endcase
    end

    // Memory interface
    assign mem_addr = load_addr;
    assign mem_wdata = program_rom[rom_addr];
    assign mem_we = (current_state == LOADING) ? 1'b1 : 1'b0;

endmodule