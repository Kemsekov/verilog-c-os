#!/bin/bash

# Script to compile and run a C program on the RISC-V virtual device
# This script demonstrates the complete process from C source to simulation

echo "==========================================="
echo "RISC-V Virtual Device - C Program Runner"
echo "==========================================="

# Create build directory
BUILD_DIR="../build"
mkdir -p $BUILD_DIR

# Define file paths in build directory
SOURCE_FILE="run.c"
STARTUP_FILE="crt0.S"  # Startup code file
ELF_FILE="$BUILD_DIR/run.elf"
BIN_FILE="$BUILD_DIR/run.bin"
HEX_FILE="$BUILD_DIR/run.hex"
LINKER_SCRIPT="$BUILD_DIR/link_script.ld"

echo ""
echo "Step 1: Checking for RISC-V toolchain..."
if command -v riscv32-unknown-elf-gcc &> /dev/null; then
    COMPILER="riscv32-unknown-elf-gcc"
    ASSEMBLER="riscv32-unknown-elf-as"
    OBJCOPY="riscv32-unknown-elf-objcopy"
    echo "✓ Found riscv32-unknown-elf-gcc toolchain"
elif command -v riscv64-unknown-elf-gcc &> /dev/null; then
    COMPILER="riscv64-unknown-elf-gcc"
    ASSEMBLER="riscv64-unknown-elf-as"
    OBJCOPY="riscv64-unknown-elf-objcopy"
    echo "✓ Found riscv64-unknown-elf-gcc toolchain"
else
    COMPILER=""
fi

if [ -n "$COMPILER" ]; then
    echo ""
    echo "Step 2: Preparing linker script..."
    # Copy the linker script to build directory
    cp "../build/link_script.ld" "$LINKER_SCRIPT"
    echo "✓ Copied linker script: $LINKER_SCRIPT"

    echo ""
    echo "Step 3: Assembling startup code..."
    STARTUP_OBJ="$BUILD_DIR/crt0.o"
    echo "   Command: $ASSEMBLER -march=rv32im -mabi=ilp32 ../run_c_program/crt0.S -o $STARTUP_OBJ"
    $ASSEMBLER -march=rv32im -mabi=ilp32 ../run_c_program/crt0.S -o $STARTUP_OBJ
    echo "✓ Assembled startup code: $STARTUP_OBJ"

    echo ""
    echo "Step 4: Compiling C source to RISC-V assembly/ELF..."
    C_OBJ="$BUILD_DIR/run.o"
    echo "   Command: $COMPILER -march=rv32im -mabi=ilp32 -c ../run_c_program/run.c -o $C_OBJ"
    $COMPILER -march=rv32im -mabi=ilp32 -c ../run_c_program/run.c -o $C_OBJ
    echo "✓ Compiled C source: $C_OBJ"

    echo ""
    echo "Step 5: Linking startup code and C program..."
    echo "   Command: $COMPILER -march=rv32im -mabi=ilp32 -nostdlib -T $LINKER_SCRIPT $STARTUP_OBJ $C_OBJ -o $ELF_FILE"
    $COMPILER -march=rv32im -mabi=ilp32 -nostdlib -T $LINKER_SCRIPT $STARTUP_OBJ $C_OBJ -o $ELF_FILE
    echo "✓ Linked successfully: $ELF_FILE"

    echo ""
    echo "Step 6: Converting ELF to different formats..."
    echo "   Command: $OBJCOPY -O binary $ELF_FILE $BIN_FILE"
    $OBJCOPY -O binary $ELF_FILE $BIN_FILE
    echo "✓ Converted to binary: $BIN_FILE"

    # Also create a hex file for the simulator
    echo "   Command: $OBJCOPY -O verilog $ELF_FILE $HEX_FILE"
    $OBJCOPY -O verilog $ELF_FILE $HEX_FILE
    echo "✓ Converted to hex: $HEX_FILE"

    echo ""
    echo "Step 7: Displaying binary information..."
    echo "   Size of binary file:"
    ls -la $BIN_FILE
    echo ""
    echo "   First few bytes (hexdump):"
    hexdump -C $BIN_FILE | head -10

    echo ""
    echo "Step 8: Using hex file from build directory for simulation..."
    echo "✓ Hex file already in build directory: $HEX_FILE"

    echo ""
    echo "Step 9: Running RISC-V virtual device simulation..."
    echo "   This will execute your C program on the virtual RISC-V processor"
    echo ""
    cd ..
    ./scripts/build.sh

    # Clean up temporary files in build directory
    echo ""
    echo "Step 10: Cleaning up temporary files..."
    rm -f ../build/run.elf ../build/run.bin ../build/crt0.o ../build/run.o
    echo "✓ Cleaned up temporary files in build directory"

    # Also clean up the hex file from build directory after simulation
    rm -f ../build/run.hex
    echo "✓ Cleaned up run.hex from build directory"

else
    echo "❌ We cannot run C file compilation and simulation without RISC-V installation"
    echo ""
    echo "To run C programs on the RISC-V virtual device, please install one of:"
    echo "  RISC-V 32-bit: sudo apt-get install gcc-riscv32-unknown-elf"
    echo "  RISC-V 64-bit: sudo apt-get install gcc-riscv64-unknown-elf"
    echo ""
    echo "After installation, run this script again to compile and simulate your C program."
    exit 1
fi

echo ""
echo "==========================================="
echo "C Program Runner Process Explained:"
echo "1. Startup code (crt0.S) -> assembled to object file"
echo "2. C source code -> RISC-V compiler -> object file"
echo "3. Object files -> linked with linker script -> ELF executable"
echo "4. ELF file -> objcopy -> raw binary/hex file"
echo "5. Binary file -> loaded into virtual memory -> RISC-V processor execution"
echo "6. Processor executes instructions -> produces results -> simulation output"
echo "==========================================="