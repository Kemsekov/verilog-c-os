// Debug Monitor Module
// Monitors memory accesses and compares with expected xv6.mif content
// Provides detailed debug output for simulation verification

module debug_monitor (
    input              i_clk,
    input              i_reset_n,       // Active LOW reset
    
    // CPU signals
    input [31:0]       i_PC,
    input [31:0]       i_instruction,
    
    // Memory interface signals
    input [31:0]       i_mem_address,
    input [31:0]       i_mem_data,
    input              i_mem_DV,
    input              i_mem_write,
    
    // Debug output control
    input              i_enable_debug,
    input [31:0]       i_debug_verbosity  // 0=none, 1=PC only, 2=PC+mem, 3=full+compare
);

    // Reference memory to store expected xv6.mif content
    // Kernel is loaded at 0x80000000, size is ~160KB (41020 bytes)
    reg [7:0] reference_mem [0:65535];  // 64KB for kernel code
    reg       reference_mem_loaded = 1'b0;
    
    // Tracking variables
    reg [31:0] last_PC = 32'h0;
    reg [31:0] last_mem_addr = 32'h0;
    reg [63:0] instruction_count = 64'h0;
    reg [63:0] memory_access_count = 64'h0;
    reg [63:0] mismatch_count = 64'h0;
    reg [63:0] execute_count = 64'h0;
    
    // Track executed addresses to verify program flow
    reg [31:0] executed_addresses [0:1023];  // Circular buffer of last 1024 PCs
    integer    exec_buf_idx = 0;
    
    // Track memory regions accessed
    reg code_region_accessed = 1'b0;
    reg data_region_accessed = 1'b0;
    reg mmio_region_accessed = 1'b0;
    
    // Memory region tracking for debug
    reg [2:0] last_mem_region = 3'h0;
    reg [3:0] last_response_region = 4'h0;  // Track which memory responded
    
    // Initial PC for boot detection
    reg [31:0] initial_PC = 32'h0;
    reg        first_PC_captured = 1'b0;
    
    // ================================================================
    // Load reference memory from file (simulation only)
    // ================================================================
    
    initial begin
        if (i_enable_debug) begin
            $display("[%0t] DEBUG_MONITOR: Initializing reference memory...", $time);
        end
        reference_mem_loaded = 1'b0;
    end
    
    // Load reference memory on first clock after reset (when reset goes HIGH)
    always @(posedge i_clk) begin
        if (i_reset_n && !reference_mem_loaded && i_enable_debug) begin
            // Load kernel from hex file (converted from xv6.mif)
            // Path is relative to testbench directory
            $readmemh("../tools/xv6_kernel.hex", reference_mem, 0, 65535);
            reference_mem_loaded = 1'b1;
            $display("[%0t] DEBUG_MONITOR: Reference memory loaded", $time);
        end
    end
    
    // ================================================================
    // Monitor PC changes and instruction execution
    // ================================================================
    
    always @(posedge i_clk) begin
        if (i_reset_n) begin  // Active when reset is HIGH (normal operation)
            // Track initial PC
            if (!first_PC_captured) begin
                initial_PC = i_PC;
                first_PC_captured = 1'b1;
                if (i_enable_debug && i_debug_verbosity >= 1) begin
                    $display("[%0t] ====== DEBUG_MONITOR: Initial PC = 0x%08h ======", $time, initial_PC);
                end
            end
            
            // Instruction fetch - instruction is being executed
            if (i_instruction != 32'hFFFFFFFF && i_instruction != 32'h00000000) begin
                instruction_count <= instruction_count + 1;
                
                // Track executed addresses
                executed_addresses[exec_buf_idx] <= i_PC;
                exec_buf_idx <= (exec_buf_idx + 1) % 1024;
                
                // Track memory regions
                if (i_PC >= 32'h80000000 && i_PC < 32'h80100000)
                    code_region_accessed <= 1'b1;
                else if (i_PC >= 32'h00000000 && i_PC < 32'h80000000)
                    data_region_accessed <= 1'b1;
                else if (i_PC >= 32'h10000000)  // MMIO region
                    mmio_region_accessed <= 1'b1;
                
                // Debug output for PC
                if (i_enable_debug && i_debug_verbosity >= 1) begin
                    if (i_PC != last_PC) begin
                        $display("[%0t] PC: 0x%08h | INST: 0x%08h | COUNT: %d", 
                                 $time, i_PC, i_instruction, instruction_count);
                        last_PC <= i_PC;
                    end
                end
                
                // Verbose: show every instruction
                if (i_enable_debug && i_debug_verbosity >= 3) begin
                    decode_and_print_instruction(i_PC, i_instruction);
                end
            end
        end
    end
    
    // ================================================================
    // Monitor memory accesses - sample on negedge to avoid race conditions
    // ================================================================
    
    reg [2:0] r_mem_region;  // For region determination
    reg [31:0] r_expected_word;
    reg [31:0] r_offset;
    reg r_match;
    reg r_mem_DV_delayed;
    reg [31:0] r_mem_address_delayed;
    reg [31:0] r_mem_data_delayed;
    reg r_mem_write_delayed;

    // Delay signals by half cycle to avoid race conditions
    always @(negedge i_clk) begin
        r_mem_DV_delayed <= i_mem_DV;
        r_mem_address_delayed <= i_mem_address;
        r_mem_data_delayed <= i_mem_data;
        r_mem_write_delayed <= i_mem_write;
    end

    always @(posedge i_clk) begin
        if (i_reset_n && r_mem_DV_delayed) begin  // Use delayed signals
            memory_access_count <= memory_access_count + 1;

            // Determine memory region from address
            r_mem_region = 3'h0;
            if (r_mem_address_delayed >= 32'h80000000 && r_mem_address_delayed < 32'h80008000)
                r_mem_region = 3'h1;  // synth_32 (kernel code)
            else if (r_mem_address_delayed >= 32'h80008000 && r_mem_address_delayed < 32'h8000c000)
                r_mem_region = 3'h2;  // synth_16
            else if (r_mem_address_delayed >= 32'h8000c000 && r_mem_address_delayed < 32'h90000000)
                r_mem_region = 3'h3;  // sdram (stack/data)
            else if (r_mem_address_delayed >= 32'h10000000 && r_mem_address_delayed < 32'h10000006)
                r_mem_region = 3'h4;  // uart
            else if (r_mem_address_delayed < 32'h00010000)
                r_mem_region = 3'h5;  // bootloader
            
            last_mem_region <= r_mem_region;
            
            // Check if accessing reference memory region (kernel at 0x80000000)
            if (r_mem_address_delayed >= 32'h80000000 && r_mem_address_delayed < 32'h80010000 && reference_mem_loaded) begin
                r_offset = r_mem_address_delayed - 32'h80000000;

                if (r_offset < 65532) begin
                    // Build expected 32-bit word from byte array (little-endian)
                    r_expected_word = {reference_mem[r_offset+3], reference_mem[r_offset+2], 
                                     reference_mem[r_offset+1], reference_mem[r_offset]};
                    
                    // Check for mismatch on reads
                    r_match = 1'b1;
                    if (!r_mem_write_delayed && r_mem_data_delayed !== r_expected_word && r_mem_data_delayed !== 32'h00000000) begin
                        mismatch_count <= mismatch_count + 1;
                        r_match = 1'b0;
                        $display("[%0t] MISMATCH: Addr=0x%08h, Got=0x%08h, Expected=0x%08h, Region=%0d", 
                                 $time, r_mem_address_delayed, r_mem_data_delayed, r_expected_word, r_mem_region);
                    end

                    // Debug output for memory accesses with comparison
                    if (i_enable_debug && i_debug_verbosity >= 2) begin
                        if (r_mem_write_delayed) begin
                            $display("[%0t] MEM_WRITE: Addr=0x%08h, Data=0x%08h, Region=%0d %s", 
                                     $time, r_mem_address_delayed, r_mem_data_delayed, r_mem_region,
                                     (r_mem_region == 3'h3) ? "[SDRAM/Stack]" : 
                                     (r_mem_region == 3'h1) ? "[Kernel]" : "[Other]");
                        end else begin
                            $display("[%0t] MEM_READ:  Addr=0x%08h, Data=0x%08h, Expected=0x%08h, Region=%0d %s", 
                                     $time, r_mem_address_delayed, r_mem_data_delayed, r_expected_word, r_mem_region,
                                     (r_match || r_mem_data_delayed == 32'h00000000) ? "[OK]" : "[DIFF]");
                        end
                    end
                end
            end else if (i_enable_debug && i_debug_verbosity >= 2) begin
                // Non-kernel memory access (MMIO, etc.)
                if (r_mem_write_delayed) begin
                    $display("[%0t] MMIO_WRITE: Addr=0x%08h, Data=0x%08h, Region=%0d", 
                             $time, r_mem_address_delayed, r_mem_data_delayed, r_mem_region);
                end else begin
                    $display("[%0t] MMIO_READ:  Addr=0x%08h, Data=0x%08h, Region=%0d", 
                             $time, r_mem_address_delayed, r_mem_data_delayed, r_mem_region);
                end
            end

            last_mem_addr <= r_mem_address_delayed;
        end
    end
    
    // ================================================================
    // Periodic status report
    // ================================================================
    
    reg [31:0] status_counter = 32'h0;
    reg [31:0] last_reported_PC = 32'h0;
    
    always @(posedge i_clk) begin
        if (i_reset_n && i_enable_debug) begin  // Active when reset is HIGH (normal operation)
            status_counter <= status_counter + 1;
            
            // Report every 10000 cycles
            if (status_counter == 32'd10000) begin
                status_counter <= 32'h0;
                
                $display("");
                $display("[%0t] ========== DEBUG_MONITOR STATUS REPORT ==========", $time);
                $display("  Instructions executed: %d", instruction_count);
                $display("  Memory accesses:       %d", memory_access_count);
                $display("  Mismatches detected:   %d", mismatch_count);
                if (memory_access_count > 0) begin
                    $display("  Match rate:            %d%%", 
                             100 - (mismatch_count * 100 / memory_access_count));
                end
                $display("  Current PC:            0x%08h", i_PC);
                $display("  Current Instruction:   0x%08h", i_instruction);
                
                if (i_PC != last_reported_PC) begin
                    $display("  PC progress:           0x%08h -> 0x%08h (+%d)", 
                             last_reported_PC, i_PC, i_PC - last_reported_PC);
                    last_reported_PC <= i_PC;
                end
                
                $display("  Code region accessed:  %s", code_region_accessed ? "YES" : "NO");
                $display("  Data region accessed:  %s", data_region_accessed ? "YES" : "NO");
                $display("  MMIO region accessed:  %s", mmio_region_accessed ? "YES" : "NO");
                
                // Check if program is actually running (PC is changing)
                if (instruction_count > 100 && i_PC == last_reported_PC) begin
                    $display("  WARNING: PC appears stuck at 0x%08h", i_PC);
                end
                
                $display("==================================================");
                $display("");
            end
        end
    end
    
    // ================================================================
    // Final report on simulation end
    // ================================================================
    
    final begin
        if (i_enable_debug) begin
            $display("");
            $display("[%0t] ========== DEBUG_MONITOR FINAL REPORT ==========", $time);
            $display("  Total instructions executed: %d", instruction_count);
            $display("  Total memory accesses:       %d", memory_access_count);
            $display("  Total mismatches:            %d", mismatch_count);
            $display("  Final PC:                    0x%08h", i_PC);
            $display("  Final Instruction:           0x%08h", i_instruction);
            $display("  Code region was accessed:    %s", code_region_accessed ? "YES" : "NO");
            $display("  Data region was accessed:    %s", data_region_accessed ? "YES" : "NO");
            $display("  MMIO region was accessed:    %s", mmio_region_accessed ? "YES" : "NO");
            
            if (instruction_count > 0) begin
                $display("");
                $display("  [OK] Program IS executing (instruction_count > 0)");
            end else begin
                $display("");
                $display("  [FAIL] Program is NOT executing (instruction_count = 0)");
            end
            
            if (code_region_accessed) begin
                $display("  [OK] Kernel code region was accessed");
            end else begin
                $display("  [FAIL] Kernel code region was NOT accessed - check memory mapping!");
            end
            
            $display("==================================================");
        end
    end
    
    // ================================================================
    // Instruction decoder for verbose output
    // ================================================================
    
    task decode_and_print_instruction;
        input [31:0] pc;
        input [31:0] instr;
        
        reg [6:0] opcode;
        reg [4:0] rd, rs1, rs2;
        reg [2:0] funct3;
        reg [6:0] funct7;
        
        begin
            opcode = instr[6:0];
            rd     = instr[11:7];
            funct3 = instr[14:12];
            rs1    = instr[19:15];
            rs2    = instr[24:20];
            funct7 = instr[31:25];
            
            case (opcode)
                7'h37: $display("    LUI     x%0d, 0x%05h", rd, instr[31:12]);
                7'h17: $display("    AUIPC   x%0d, 0x%05h", rd, instr[31:12]);
                7'h6F: $display("    JAL     x%0d, %0d", rd, $signed({instr[31], instr[19:12], instr[20], instr[30:21], 1'b0}));
                7'h67: $display("    JALR    x%0d, %0d(x%0d)", rd, $signed(instr[31:20]), rs1);
                7'h63: begin
                    case (funct3)
                        3'h0: $display("    BEQ     x%0d, x%0d, %0d", rs1, rs2, $signed({instr[31], instr[7], instr[30:25], instr[11:8], 1'b0}));
                        3'h1: $display("    BNE     x%0d, x%0d, %0d", rs1, rs2, $signed({instr[31], instr[7], instr[30:25], instr[11:8], 1'b0}));
                        3'h4: $display("    BLT     x%0d, x%0d, %0d", rs1, rs2, $signed({instr[31], instr[7], instr[30:25], instr[11:8], 1'b0}));
                        3'h5: $display("    BGE     x%0d, x%0d, %0d", rs1, rs2, $signed({instr[31], instr[7], instr[30:25], instr[11:8], 1'b0}));
                    endcase
                end
                7'h03: begin
                    case (funct3)
                        3'h0: $display("    LB      x%0d, %0d(x%0d)", rd, $signed(instr[31:20]), rs1);
                        3'h1: $display("    LH      x%0d, %0d(x%0d)", rd, $signed(instr[31:20]), rs1);
                        3'h2: $display("    LW      x%0d, %0d(x%0d)", rd, $signed(instr[31:20]), rs1);
                    endcase
                end
                7'h23: begin
                    case (funct3)
                        3'h0: $display("    SB      x%0d, %0d(x%0d)", rs2, $signed(instr[31:25]), rs1);
                        3'h1: $display("    SH      x%0d, %0d(x%0d)", rs2, $signed(instr[31:25]), rs1);
                        3'h2: $display("    SW      x%0d, %0d(x%0d)", rs2, $signed(instr[31:25]), rs1);
                    endcase
                end
                7'h13: begin
                    case (funct3)
                        3'h0: $display("    ADDI    x%0d, x%0d, %0d", rd, rs1, $signed(instr[31:20]));
                        3'h2: $display("    SLTI    x%0d, x%0d, %0d", rd, rs1, $signed(instr[31:20]));
                        3'h3: $display("    SLTIU   x%0d, x%0d, 0x%03h", rd, rs1, instr[31:20]);
                    endcase
                end
                7'h33: begin
                    if (funct7 == 7'h00) begin
                        case (funct3)
                            3'h0: $display("    ADD     x%0d, x%0d, x%0d", rd, rs1, rs2);
                            3'h1: $display("    SLL     x%0d, x%0d, x%0d", rd, rs1, rs2);
                        endcase
                    end else if (funct7 == 7'h20) begin
                        case (funct3)
                            3'h0: $display("    SUB     x%0d, x%0d, x%0d", rd, rs1, rs2);
                        endcase
                    end
                end
                7'h73: begin
                    if (instr == 32'h00000073) begin
                        $display("    ECALL");
                    end else if (instr == 32'h00100073) begin
                        $display("    EBREAK");
                    end else begin
                        $display("    CSR     0x%03h", instr[31:20]);
                    end
                end
                default: $display("    UNKNOWN 0x%08h", instr);
            endcase
        end
    endtask
    
endmodule
