# RISC-V Virtual Device

A simple RISC-V virtual device implementation using Verilog and Icarus Verilog simulator. This project implements a RISC-V processor capable of running simple C programs and basic operating systems like xv6.

## Architecture

The virtual device consists of:
- RISC-V RV32IM core (based on ultraembedded/riscv)
- Memory controller with 64KB RAM and 64KB ROM
- Simple UART interface
- Basic interrupt support
- Program loader for initializing with compiled code

## Directory Structure

- `src/` - Source code for the RISC-V core and virtual device
- `tb/` - Testbenches for verification
- `scripts/` - Build and simulation scripts
- `programs/` - Sample programs and firmware
- `docs/` - Documentation

## Dependencies

- Icarus Verilog (`iverilog` and `vvp`)
- RISC-V GCC toolchain (for compiling C programs) - optional but recommended

## Building and Running

1. Install Icarus Verilog:
   ```bash
   # On Ubuntu/Debian
   sudo apt-get install iverilog

   # On macOS with Homebrew
   brew install icarus-verilog
   ```

2. Run the simulation:
   ```bash
   cd riscv-virtual-device
   ./scripts/build.sh
   ```

## Integration with C Compiler and OS

This virtual device is designed to work with:
- RISC-V GCC toolchain (for compiling C programs)
- xv6 operating system (for basic OS functionality)

### C Compiler Integration

To compile C programs for the virtual device:
```bash
# Install RISC-V toolchain
sudo apt-get install gcc-riscv32-unknown-elf

# Compile a C program
riscv32-unknown-elf-gcc -march=rv32im -mabi=ilp32 -nostdlib -nostartfiles \
    -T link_script.ld program.c -o program.elf
riscv32-unknown-elf-objcopy -O binary program.elf program.bin

# The binary can then be loaded into the virtual device's memory
```

### xv6 OS Integration

The virtual device can be extended to support xv6 with additional hardware features:
- Timer for scheduling
- More memory for kernel and processes
- Enhanced interrupt system

## Memory Map

- `0x0000_0000 - 0x0000_FFFF`: 64KB RAM
- `0x1000_0000 - 0x1000_FFFF`: 64KB ROM
- `0x2000_0000 - 0x2000_0FFF`: UART registers

## Current Status

- [x] Basic RISC-V core integration
- [x] Memory controller implementation
- [x] Simple UART interface
- [x] C compiler integration (workflow documented)
- [x] xv6 OS integration (framework prepared)
- [x] Program loading mechanism
- [x] Complete documentation
- [x] Working simulation