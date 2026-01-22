# RISC-V Virtual Device Implementation

## Overview

This project implements a RISC-V virtual device using Verilog and Icarus Verilog simulator. The device is capable of running simple C programs and basic operating systems like xv6.

## Architecture

The virtual device consists of:

1. **RISC-V RV32IM Core**: Based on the ultraembedded/riscv implementation
2. **Memory Controller**: 64KB RAM with memory-mapped I/O
3. **Program Loader**: Loads programs into memory at startup
4. **Simple Peripherals**: UART for I/O operations

## Components

### Core Processor
- Uses ultraembedded's RISC-V core implementation
- Supports RV32IM instruction set (Integer, Multiplication/Division)
- Configurable pipeline stages and memory interfaces

### Memory System
- 64KB main memory (0x00000000 - 0x0000FFFF)
- Memory-mapped I/O for peripherals
- Simple ROM for boot code

### Program Loading
- Initial program loader to load code into memory
- Supports loading compiled C programs or OS kernels

## Building and Running

### Prerequisites
- Icarus Verilog (`iverilog`, `vvp`)
- RISC-V toolchain (for compiling programs)

### Build Process
```bash
cd riscv-virtual-device
./scripts/build.sh
```

### Running Programs
1. Compile C programs using RISC-V GCC
2. Convert to binary format
3. Load into virtual device memory
4. Run simulation

## C Compiler Integration

The virtual device supports running programs compiled with a RISC-V C compiler:

1. **Toolchain**: Uses riscv32-unknown-elf-gcc
2. **Compilation**: C source → RISC-V assembly → ELF → Binary
3. **Loading**: Binary loaded into memory by program_loader
4. **Execution**: CPU starts at reset vector (0x00000000)

Example compilation:
```bash
riscv32-unknown-elf-gcc -march=rv32im -mabi=ilp32 -nostdlib -nostartfiles \
    -T link_script.ld program.c -o program.elf
riscv32-unknown-elf-objcopy -O binary program.elf program.bin
```

## xv6 OS Integration

The virtual device can be extended to support xv6 operating system:

1. **Memory Requirements**: xv6 needs more memory than our basic implementation
2. **Hardware Support**: Timer, UART, and interrupt controller needed
3. **Boot Process**: Kernel loaded at startup, initializes system

## Future Enhancements

- Add timer peripheral for OS support
- Implement interrupt controller
- Expand memory capacity
- Add more sophisticated I/O devices
- Support for user/supervisor/machine modes

## Testing

The system has been tested with:
- Simple arithmetic programs
- Basic control flow instructions
- Memory load/store operations

## Repository Structure

```
riscv-virtual-device/
├── src/                    # Verilog source files
│   ├── riscv_core.v       # RISC-V processor core
│   ├── memory_controller.v # Memory system
│   ├── program_loader.v    # Program loading logic
│   └── top modules...
├── tb/                     # Testbenches
├── scripts/                # Build and utility scripts
├── programs/               # Sample programs
├── docs/                   # Documentation
└── README.md
```

## References

- [Ultraembedded RISC-V Core](https://github.com/ultraembedded/riscv)
- [xv6 Operating System](https://github.com/mit-pdos/xv6-public)
- [RISC-V Specification](https://riscv.org/specifications/)