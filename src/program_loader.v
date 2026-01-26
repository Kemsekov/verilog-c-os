// Program loader for RISC-V Virtual Device
// Loads programs into memory at startup

module program_loader (
    input clk,
    input rst_n,

    // Memory interface
    output reg [31:0] mem_addr,
    output reg [31:0] mem_wdata,
    output reg mem_we,

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

    // Memory to store the loaded program
    reg [7:0] program_mem [0:4095];  // 4KB of program storage

    integer i, j;
    reg [31:0] word_count;
    integer hex_loaded_successfully;

    // Load the binary file at initialization
    initial begin
        // Initialize all memory to zero
        for (i = 0; i < 4096; i = i + 1) begin
            program_mem[i] = 8'h00;
        end

        // Try to load run.hex, fallback to hardcoded program if not found
        $display("Attempting to load run.hex...");
        // Try to load the hex file first
        hex_loaded_successfully = 1;  // Assume success initially

        // Attempt to load the hex file from build directory - if it fails, the simulator will print an error
        // but we can't detect this failure in the code, so we'll check if anything was loaded
        $readmemh("build/run.hex", program_mem);

        // Check if the hex file loaded anything by looking at the first few bytes
        if (program_mem[0] == 8'h00 && program_mem[1] == 8'h00 &&
            program_mem[2] == 8'h00 && program_mem[3] == 8'h00) begin
            // Hex file didn't load anything, try the binary file
            $display("run.hex not found or empty, attempting to load run.bin...");
            // Since we can't directly load binary files in Verilog, we'll just use the default program
            $display("Loading default program");
            // Load a simple default program
            program_mem[0] = 8'h93;  // addi x1, x0, 1  (x1 = 1)
            program_mem[1] = 8'h00;
            program_mem[2] = 8'h10;
            program_mem[3] = 8'h00;

            program_mem[4] = 8'h13;  // addi x2, x0, 2  (x2 = 2)
            program_mem[5] = 8'h00;
            program_mem[6] = 8'h20;
            program_mem[7] = 8'h00;

            program_mem[8] = 8'hb3;  // add x3, x1, x2  (x3 = x1 + x2 = 3)
            program_mem[9] = 8'h00;
            program_mem[10] = 8'h20;
            program_mem[11] = 8'h81;

            program_mem[12] = 8'h13;  // addi x4, x0, 3  (x4 = 3)
            program_mem[13] = 8'h00;
            program_mem[14] = 8'h02;
            program_mem[15] = 8'h00;

            program_mem[16] = 8'h6f;  // jal x0, 0 (infinite loop)
            program_mem[17] = 8'h00;
            program_mem[18] = 8'h00;
            program_mem[19] = 8'h00;

            word_count = 5;  // 5 words in default program
        end else begin
            $display("Successfully loaded run.hex into memory");
            // Count number of 32-bit words loaded (up to 1024 words max)
            word_count = 0;

            // Count non-zero words in the program
            for (i = 0; i < 1024; i = i + 1) begin
                if (program_mem[i*4] != 8'h00 || program_mem[i*4+1] != 8'h00 ||
                    program_mem[i*4+2] != 8'h00 || program_mem[i*4+3] != 8'h00) begin
                    word_count = i + 1;  // Update word_count each time we find a non-zero word
                end
                // Continue scanning - the last assignment to word_count will be the total
            end
        end
    end

    // State machine logic
    always @(posedge clk) begin
        if (!rst_n) begin
            current_state <= IDLE;
            load_addr <= 32'h0000_0000;
            rom_addr <= 32'h0000_0000;
            loading_done <= 1'b0;
            mem_addr <= 32'h0000_0000;
            mem_wdata <= 32'h0000_0000;
            mem_we <= 1'b0;
        end else begin
            current_state <= next_state;

            case (current_state)
                IDLE: begin
                    load_addr <= 32'h0000_0000;  // Start loading at address 0
                    rom_addr <= 32'h0000_0000;
                    loading_done <= 1'b0;
                    mem_addr <= 32'h0000_0000;
                    mem_wdata <= 32'h0000_0000;
                    mem_we <= 1'b0;
                end

                LOADING: begin
                    // Construct 32-bit word from 4 bytes
                    mem_wdata <= {program_mem[rom_addr+3], program_mem[rom_addr+2],
                                  program_mem[rom_addr+1], program_mem[rom_addr]};

                    mem_addr <= load_addr;
                    mem_we <= 1'b1;  // Enable write

                    load_addr <= load_addr + 4;  // Increment by 4 bytes (word-aligned)
                    rom_addr <= rom_addr + 4;

                    if (rom_addr >= (word_count * 4)) begin  // Reached end of program
                        loading_done <= 1'b1;
                        mem_we <= 1'b0;  // Disable write after loading
                    end
                end

                DONE: begin
                    mem_we <= 1'b0;  // Disable write after loading
                end
                default: begin
                    current_state <= IDLE;
                    mem_we <= 1'b0;
                end
            endcase
        end
    end

    // Next state logic
    always @(*) begin
        case (current_state)
            IDLE: next_state = LOADING;
            LOADING: next_state = (rom_addr >= (word_count * 4)) ? DONE : LOADING;
            DONE: next_state = DONE;
            default: next_state = IDLE;
        endcase
    end

endmodule