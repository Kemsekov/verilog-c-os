# Simplified Makefile for RISC-V C program simulation

# Toolchain
RISCV_GCC = riscv64-unknown-elf-gcc
RISCV_OBJDUMP = riscv64-unknown-elf-objdump

# Compiler flags for RISC-V
CFLAGS = -march=rv32imzicsr -mabi=ilp32 -O2 -ffreestanding -nostdlib -nostartfiles -mcmodel=medany

# Directories
BUILD_DIR = build
ISA_SIM_DIR = ../isa_sim
TCM_TB_DIR = ../top_tcm_axi/tb

# Default target
.PHONY: all clean run_isa_sim run_verilog_sim

all: $(BUILD_DIR)/run.elf

# Create build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Compile assembly and C programs to RISC-V ELF
$(BUILD_DIR)/startup.o: startup.s | $(BUILD_DIR)
	$(RISCV_GCC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/run.o: run.c | $(BUILD_DIR)
	$(RISCV_GCC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/run.elf: $(BUILD_DIR)/run.o $(BUILD_DIR)/startup.o $(BUILD_DIR)/link.ld
	$(RISCV_GCC) $(CFLAGS) -T $(BUILD_DIR)/link.ld -o $@ $(BUILD_DIR)/startup.o $< -lgcc
	$(RISCV_OBJDUMP) -d $@ > $(BUILD_DIR)/run.disasm

# Linker script for placing code at appropriate address
$(BUILD_DIR)/link.ld: link_script.ld | $(BUILD_DIR)
	cp link_script.ld $@

# Run ISA simulator (C++ model)
run_isa_sim: $(BUILD_DIR)/run.elf
	@echo "Running C program on ISA simulator..."
	@cd $(ISA_SIM_DIR) && make && ./riscv-sim -f ../run_c/$(BUILD_DIR)/run.elf

# Run Verilog simulation (RTL model)
run_verilog_sim: $(BUILD_DIR)/run.elf
	@echo "Building and running C program on Verilog RTL simulation..."
	@cd $(TCM_TB_DIR) && make TEST_IMAGE=../../run_c/$(BUILD_DIR)/run.elf
	@cd $(TCM_TB_DIR) && make run TEST_IMAGE=../../run_c/$(BUILD_DIR)/run.elf

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR)
	cd $(ISA_SIM_DIR) && make clean
	# Note: Not cleaning TCM_TB_DIR to preserve VCD files after simulation

help:
	@echo "Available targets:"
	@echo "  all             - Compile run.c to RISC-V ELF (default)"
	@echo "  run_isa_sim     - Run run.c on C++ ISA simulator"
	@echo "  run_verilog_sim - Run run.c on Verilog RTL simulation (generates VCD)"
	@echo "  clean           - Clean build artifacts"
	@echo ""
	@echo "Note: You need RISC-V toolchain installed to compile programs."
	@echo "      All build artifacts are placed in the build/ directory."