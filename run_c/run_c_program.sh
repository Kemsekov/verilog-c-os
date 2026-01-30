#!/bin/bash

# Script to compile and run a C program on RISC-V simulator
# Usage: ./run_c_program.sh <input_c_file>

set -e  # Exit on any error

INPUT_FILE="$1"

if [ -z "$INPUT_FILE" ]; then
    echo "Usage: $0 <input_c_file>"
    echo "Example: $0 run.c"
    exit 1
fi

if [ ! -f "$INPUT_FILE" ]; then
    echo "Error: File '$INPUT_FILE' not found!"
    exit 1
fi

# Extract base name without extension
BASE_NAME=$(basename "$INPUT_FILE" .c)

echo "Compiling $INPUT_FILE to RISC-V..."

# Create build directory if it doesn't exist
mkdir -p build

# Compile the C program to RISC-V ELF
riscv64-unknown-elf-gcc -march=rv32imzicsr -mabi=ilp32 -O2 -ffreestanding -nostdlib -nostartfiles \
    -T link_script.ld -o "build/${BASE_NAME}.elf" "$INPUT_FILE" -lgcc

if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi

echo "Compilation successful! Generated build/${BASE_NAME}.elf"

# Generate disassembly
riscv64-unknown-elf-objdump -d "build/${BASE_NAME}.elf" > "build/${BASE_NAME}.disasm"
echo "Disassembly saved to build/${BASE_NAME}.disasm"

echo ""
echo "Running on ISA simulator..."
cd ../isa_sim && make
ISA_LOG="../run_c/build/${BASE_NAME}_isa.log"
echo "ISA simulation log will be saved to $ISA_LOG"
# Temporarily disable exit on error for the simulation
set +e
./riscv-sim -f "../run_c/build/${BASE_NAME}.elf" > "$ISA_LOG" 2>&1
ISA_EXIT_CODE=$?
set -e
echo "ISA simulation completed with exit code: $ISA_EXIT_CODE"

echo ""
echo "Running on Verilog RTL simulation (generating VCD waveform)..."
cd ../top_tcm_axi/tb
VERILOG_LOG="../../run_c/build/${BASE_NAME}_verilog.log"
echo "Verilog simulation log will be saved to $VERILOG_LOG"
make TEST_IMAGE="../../run_c/build/${BASE_NAME}.elf" > /dev/null 2>&1
make run TEST_IMAGE="../../run_c/build/${BASE_NAME}.elf" > "$VERILOG_LOG" 2>&1
VERILOG_EXIT_CODE=$?
echo "Verilog simulation completed with exit code: $VERILOG_EXIT_CODE"

# Copy VCD files to build directory
if [ -f "sysc_wave.vcd" ]; then
    cp sysc_wave.vcd "../../run_c/build/${BASE_NAME}_sysc_wave.vcd"
    echo "Copied sysc_wave.vcd to build/${BASE_NAME}_sysc_wave.vcd"
fi

if [ -f "verilator.vcd" ]; then
    cp verilator.vcd "../../run_c/build/${BASE_NAME}_verilator.vcd"
    echo "Copied verilator.vcd to build/${BASE_NAME}_verilator.vcd"
fi

echo ""
echo "Simulation complete! Results saved to build/ directory:"
echo "- ISA simulation log: build/${BASE_NAME}_isa.log"
echo "- Verilog simulation log: build/${BASE_NAME}_verilog.log"
echo "- SystemC VCD waveform: build/${BASE_NAME}_sysc_wave.vcd"
echo "- Verilator VCD waveform: build/${BASE_NAME}_verilator.vcd"
echo "- ELF executable: build/${BASE_NAME}.elf"
echo "- Disassembly: build/${BASE_NAME}.disasm"