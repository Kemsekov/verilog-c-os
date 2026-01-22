# C Compiler Integration

This document describes how to compile C programs for the RISC-V virtual device.

## Toolchain Setup

To compile C programs for the RISC-V virtual device, you need the RISC-V GCC toolchain:

```bash
# Ubuntu/Debian
sudo apt-get install gcc-riscv32-unknown-elf

# Or build from source
git clone https://github.com/riscv/riscv-gnu-toolchain
cd riscv-gnu-toolchain
./configure --prefix=/opt/riscv --with-arch=rv32im --with-abi=ilp32
make
```

## Compilation Process

The compilation process involves:

1. Compiling C source to RISC-V assembly/ELF
2. Converting ELF to binary format
3. Loading the binary into the virtual device's memory

## Example Program

The `programs/examples/simple_add.c` demonstrates a basic program that:
- Performs integer arithmetic
- Returns a computed value

## Integration with Virtual Device

The virtual device's `program_loader` module handles loading compiled binaries into memory at startup. The CPU begins execution at address 0x00000000.

## Running the Example

```bash
cd riscv-virtual-device
./scripts/compile_c_program.sh
./scripts/build.sh
```

The simulation will execute the compiled program and show the results.