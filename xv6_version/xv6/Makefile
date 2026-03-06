# Makefile for RISC-V xv6-like kernel simulation

# Toolchain
RISCV_GCC = riscv64-unknown-elf-gcc
RISCV_OBJDUMP = riscv64-unknown-elf-objdump
RISCV_OBJCOPY = riscv64-unknown-elf-objcopy

# Compiler flags for RISC-V
CFLAGS = -march=rv32imzicsr -mabi=ilp32 -O2 -ffreestanding -nostdlib -nostartfiles -mcmodel=medany

# Directories
BUILD_DIR = build
LIB_DIR = lib
ISA_SIM_DIR = ../isa_sim
TCM_TB_DIR = ../top_tcm_axi/tb

# Library source files - comment out for simple kernel
# LIB_SRCS = $(wildcard $(LIB_DIR)/*.c)
# LIB_OBJS = $(patsubst $(LIB_DIR)/%.c,$(BUILD_DIR)/%.o,$(LIB_SRCS))
# Only include utils for basic print/sim_exit functions
LIB_OBJS = $(BUILD_DIR)/utils.o

# Kernel files
KERNEL_SRCS = xv6_kernel.c
KERNEL_OBJS = $(patsubst %.c,$(BUILD_DIR)/%.o,$(KERNEL_SRCS))
ASM_SRCS = startup.s
ASM_OBJS = $(patsubst %.s,$(BUILD_DIR)/%.o,$(ASM_SRCS))

# All object files
ALL_OBJS = $(KERNEL_OBJS) $(LIB_OBJS) $(ASM_OBJS)

# Default target
.PHONY: all clean run_isa_sim run_verilog_sim run_both help

all: $(BUILD_DIR)/xv6_kernel.elf

# Create build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Compile assembly files
$(BUILD_DIR)/%.o: $(LIB_DIR)/%.s | $(BUILD_DIR)
	$(RISCV_GCC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: %.s | $(BUILD_DIR)
	$(RISCV_GCC) $(CFLAGS) -c $< -o $@

# Compile C files
$(BUILD_DIR)/%.o: $(LIB_DIR)/%.c | $(BUILD_DIR)
	$(RISCV_GCC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: %.c | $(BUILD_DIR)
	$(RISCV_GCC) $(CFLAGS) -c $< -o $@

# Link kernel ELF
$(BUILD_DIR)/xv6_kernel.elf: $(ALL_OBJS) $(BUILD_DIR)/link.ld
	$(RISCV_GCC) $(CFLAGS) -T $(BUILD_DIR)/link.ld -o $@ $(ASM_OBJS) $(LIB_OBJS) $(KERNEL_OBJS) -lgcc
	$(RISCV_OBJDUMP) -d $@ > $(BUILD_DIR)/xv6_kernel.disasm
	$(RISCV_OBJCOPY) -O verilog $@ $(BUILD_DIR)/xv6_kernel.verilog

# Linker script
$(BUILD_DIR)/link.ld: link_script.ld | $(BUILD_DIR)
	cp link_script.ld $@

# Run ISA simulator
run_isa_sim: $(BUILD_DIR)/xv6_kernel.elf
	@echo "========================================="
	@echo "Running xv6-like kernel on ISA simulator"
	@echo "========================================="
	@cd $(ISA_SIM_DIR) && make && ./riscv-sim -f ../xv6/$(BUILD_DIR)/xv6_kernel.elf || true

# Run Verilog simulation
run_verilog_sim: $(BUILD_DIR)/xv6_kernel.elf
	@echo "============================================"
	@echo "Running xv6-like kernel on Verilog simulation"
	@echo "============================================"
	@cd $(TCM_TB_DIR) && make TEST_IMAGE=../../xv6/$(BUILD_DIR)/xv6_kernel.elf
	@cd $(TCM_TB_DIR) && make run TEST_IMAGE=../../xv6/$(BUILD_DIR)/xv6_kernel.elf
	@echo "Copying VCD files to build directory..."
	@cp $(TCM_TB_DIR)/sysc_wave.vcd $(BUILD_DIR)/ 2>/dev/null || echo "No sysc_wave.vcd file to copy"
	@cp $(TCM_TB_DIR)/verilator.vcd $(BUILD_DIR)/ 2>/dev/null || echo "No verilator.vcd file to copy"
	@echo "VCD files copied. View with: gtkwave build/verilator.vcd"

# Run both simulators
run_both: $(BUILD_DIR)/xv6_kernel.elf
	@echo "========================================="
	@echo "Running on ISA simulator"
	@echo "========================================="
	@cd $(ISA_SIM_DIR) && make && ./riscv-sim -f ../xv6/$(BUILD_DIR)/xv6_kernel.elf || true
	@echo ""
	@echo "============================================"
	@echo "Running on Verilog RTL simulation"
	@echo "============================================"
	@cd $(TCM_TB_DIR) && make TEST_IMAGE=../../xv6/$(BUILD_DIR)/xv6_kernel.elf
	@cd $(TCM_TB_DIR) && make run TEST_IMAGE=../../xv6/$(BUILD_DIR)/xv6_kernel.elf
	@echo "Copying VCD files to build directory..."
	@cp $(TCM_TB_DIR)/sysc_wave.vcd $(BUILD_DIR)/ 2>/dev/null || echo "No sysc_wave.vcd file to copy"
	@cp $(TCM_TB_DIR)/verilator.vcd $(BUILD_DIR)/ 2>/dev/null || echo "No verilator.vcd file to copy"

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR)
	cd $(ISA_SIM_DIR) && make clean
	# Note: Not cleaning TCM_TB_DIR to preserve VCD files

# Show help
help:
	@echo "RISC-V xv6-like Kernel Build System"
	@echo "===================================="
	@echo ""
	@echo "Available targets:"
	@echo "  all             - Compile kernel to RISC-V ELF (default)"
	@echo "  run_isa_sim     - Run on C++ ISA simulator"
	@echo "  run_verilog_sim - Run on Verilog RTL simulation"
	@echo "  run_both        - Run on both simulators"
	@echo "  clean           - Clean build artifacts"
	@echo "  help            - Show this help"
	@echo ""
	@echo "Library modules:"
	@for src in $(LIB_SRCS); do echo "  $$src"; done
	@echo ""
	@echo "Output files (in build/):"
	@echo "  xv6_kernel.elf      - RISC-V executable"
	@echo "  xv6_kernel.disasm   - Disassembly"
	@echo "  xv6_kernel.verilog  - Verilog memory file"
	@echo "  sysc_wave.vcd       - SystemC waveform"
	@echo "  verilator.vcd       - Verilator waveform"
