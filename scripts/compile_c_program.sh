#!/bin/bash

# Script to compile C programs for the RISC-V virtual device
# This simulates the process of compiling C code to RISC-V machine code

echo "RISC-V Virtual Device C Compiler Integration"
echo "============================================="

# Check if riscv32-unknown-elf-gcc is available
if ! command -v riscv32-unknown-elf-gcc &> /dev/null; then
    echo "Warning: riscv32-unknown-elf-gcc not found."
    echo "You may need to install the RISC-V toolchain:"
    echo "  Ubuntu/Debian: sudo apt-get install gcc-riscv32-unknown-elf"
    echo "  Or build from: https://github.com/riscv/riscv-gnu-toolchain"
    echo ""
    echo "For demonstration purposes, we'll show what the process would look like."
    echo ""
    echo "Example compilation command:"
    echo "  riscv32-unknown-elf-gcc -march=rv32im -mabi=ilp32 -nostdlib -nostartfiles \\"
    echo "    -T link.ld simple_add.c -o simple_add.elf"
    echo "  riscv32-unknown-elf-objcopy -O binary simple_add.elf simple_add.bin"
    echo ""
    echo "The resulting binary would then be loaded into the virtual device's memory."
else
    echo "Found riscv32-unknown-elf-gcc. Proceeding with compilation..."
    
    # Create a simple linker script
    cat > link.ld << 'EOF'
MEMORY
{
    ram (rwx) : ORIGIN = 0x00000000, LENGTH = 64K
}

SECTIONS
{
    . = ORIGIN(ram);
    .text : { *(.text*) } > ram
    .data : { *(.data*) } > ram
    .bss : { *(.bss*) } > ram
}
EOF

    # Compile the example program
    riscv32-unknown-elf-gcc -march=rv32im -mabi=ilp32 -nostdlib -nostartfiles \
        -T link.ld programs/examples/simple_add.c -o programs/examples/simple_add.elf
    
    # Convert to binary format
    if [ -f "programs/examples/simple_add.elf" ]; then
        riscv32-unknown-elf-objcopy -O binary programs/examples/simple_add.elf programs/examples/simple_add.bin
        echo "Compilation successful! Binary output: programs/examples/simple_add.bin"
    else
        echo "Compilation failed!"
    fi
fi

echo ""
echo "Integration with Virtual Device:"
echo "- The compiled binary would be loaded into the device's memory at startup"
echo "- The program_loader module handles initial program loading"
echo "- Execution begins at the reset vector address (0x00000000)"