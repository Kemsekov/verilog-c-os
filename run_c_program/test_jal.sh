#!/bin/bash

# Simple assembly program runner to test JAL instruction specifically

echo "Testing JAL instruction with simple assembly program..."

# Create build directory
BUILD_DIR="../build"
mkdir -p $BUILD_DIR

# Define file paths
ASM_FILE="test_jal.s"
ELF_FILE="$BUILD_DIR/test_jal.elf"
BIN_FILE="$BUILD_DIR/test_jal.bin"
HEX_FILE="$BUILD_DIR/test_jal.hex"
LINKER_SCRIPT="$BUILD_DIR/link_script.ld"

# Create a simple linker script
cat > $LINKER_SCRIPT << 'EOF'
MEMORY
{
    ram (rwx) : ORIGIN = 0x00000000, LENGTH = 64K
}

SECTIONS
{
    . = ORIGIN(ram);
    .text : { *(.text.startup*) *(.text*) } > ram
    .data : { *(.data*) } > ram
    .bss : { *(.bss*) } > ram
}
EOF

echo "Step 1: Assembling assembly file..."
riscv64-unknown-elf-as -march=rv32im -mabi=ilp32 test_jal.s -o $BUILD_DIR/test_jal.o

echo "Step 2: Linking assembly object..."
riscv64-unknown-elf-ld -T $LINKER_SCRIPT $BUILD_DIR/test_jal.o -o $ELF_FILE

echo "Step 3: Converting to different formats..."
riscv64-unknown-elf-objcopy -O binary $ELF_FILE $BIN_FILE
riscv64-unknown-elf-objcopy -O verilog $ELF_FILE $HEX_FILE

echo "Step 4: Disassembling to verify instructions..."
riscv64-unknown-elf-objdump -d $ELF_FILE

echo "Step 5: Running simulation..."
cd ..
./scripts/build.sh