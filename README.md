# RISC-V Virtual Device

A simple RISC-V virtual device implementation using Verilog and Icarus Verilog simulator. This project implements a RISC-V processor capable of running simple C programs and basic operating systems like xv6.

## Architecture

The virtual device consists of:
- RISC-V RV32IM core (based on ultraembedded/riscv)
- Memory controller with 64KB RAM
- Simple UART interface
- Basic interrupt support
- Program loader for initializing with compiled code

## Directory Structure

- `src/` - Source code for the RISC-V core and virtual device
- `tb/` - Testbenches for verification
- `scripts/` - Build and simulation scripts
- `run_c_program/` - C program compilation and execution scripts
- `third_party/` - Third-party RISC-V core files (ultraembedded/riscv)

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

## Running C Programs

To compile and run C programs on the virtual device:

1. Install RISC-V toolchain:
   ```bash
   # On Ubuntu/Debian
   sudo apt-get install gcc-riscv64-unknown-elf
   # or
   sudo apt-get install gcc-riscv32-unknown-elf
   ```

2. Navigate to the C program directory and run:
   ```bash
   cd run_c_program
   bash run_program.sh
   ```

   This script will:
   - Compile your C program to RISC-V assembly/ELF
   - Convert to binary format
   - Copy the binary to the parent directory
   - Run the RISC-V virtual device simulation with your program

## Integration with C Compiler and OS

This virtual device is designed to work with:
- RISC-V GCC toolchain (for compiling C programs)
- xv6 operating system (for basic OS functionality)

### C Compiler Integration

The `run_c_program/run_program.sh` script automates the entire process:
- Compiles C source to RISC-V ELF object file
- Converts ELF to binary format
- Copies binary to simulation directory
- Runs the virtual device simulation with the compiled program

### xv6 OS Integration

The virtual device can be extended to support xv6 with additional hardware features:
- Timer for scheduling
- More memory for kernel and processes
- Enhanced interrupt system

## Memory Map

- `0x0000_0000 - 0x0000_FFFF`: 64KB RAM
- `0x1000_0000 - 0x1000_FFFF`: Reserved for ROM (currently unused)
- `0x2000_0000 - 0x2000_0FFF`: UART registers

## Current Status

- [x] Basic RISC-V core integration
- [x] Memory controller implementation
- [x] Simple UART interface
- [x] C compiler integration (with automated workflow)
- [x] xv6 OS integration (framework prepared)
- [x] Program loading mechanism
- [x] Complete documentation
- [x] Working simulation
- [x] Automated C program compilation and execution

## Modifications to Third-Party Libraries

The following modifications have been made to improve the virtual device:

- Removed problematic halt detection mechanism that was causing issues
- Removed non-functional cycle_count and cpu_return_value monitoring
- Improved file organization to keep build artifacts in build/ directory
- Streamlined C program compilation workflow