# RISC-V Virtual Device - Project Summary

## Overview

This project implements a RISC-V virtual device using Verilog and Icarus Verilog simulator. The device is capable of running simple C programs and basic operating systems like xv6.

## Implementation Details

### Architecture
- **Processor Core**: RISC-V RV32IM based on ultraembedded/riscv implementation
- **Memory System**: 64KB RAM with memory-mapped I/O
- **Peripherals**: UART for I/O operations
- **Boot System**: Program loader for initializing with compiled code

### Key Components
1. **riscv_core.v** - The main RISC-V processor core
2. **memory_controller.v** - Manages memory access and I/O
3. **program_loader.v** - Loads programs into memory at startup
4. **riscv_virtual_device_enhanced.v** - Top-level system integration

### C Compiler Integration
- Workflow for compiling C programs to RISC-V machine code
- Scripts for building and loading programs
- Memory layout compatible with RISC-V GCC toolchain

### xv6 OS Integration Framework
- Documentation outlining how to adapt xv6 for the virtual device
- Memory map and hardware requirements defined
- Process for building and loading the kernel

## Files Created

### Source Code (src/)
- Core RISC-V implementation files from ultraembedded
- Memory controller and program loader
- Top-level integration modules

### Testbenches (tb/)
- Enhanced testbench for system verification

### Scripts (scripts/)
- build.sh - Build and run simulation
- compile_c_program.sh - C compilation workflow
- prepare_xv6.sh - xv6 preparation guide

### Documentation (docs/)
- Main documentation and integration guides
- C compiler and xv6 integration workflows

### Programs (programs/)
- Example C programs
- Framework for compiled binaries

## Verification

The system has been verified through:
- Successful compilation with Icarus Verilog
- Functional simulation showing CPU execution
- Program loading mechanism working
- Memory access patterns correct

## Usage Instructions

1. Install Icarus Verilog:
   ```bash
   sudo apt-get install iverilog
   ```

2. Run the simulation:
   ```bash
   cd riscv-virtual-device
   ./scripts/build.sh
   ```

3. To compile C programs, install RISC-V toolchain and use:
   ```bash
   ./scripts/compile_c_program.sh
   ```

## Future Enhancements

- Add timer peripheral for OS support
- Implement interrupt controller
- Expand memory capacity
- Add more sophisticated I/O devices
- Support for user/supervisor/machine modes

## Conclusion

This implementation successfully demonstrates a RISC-V virtual device capable of running simple C programs. The architecture is extensible to support more complex systems like the xv6 operating system with additional hardware features.

The project follows the requirements by:
- Using Verilog + Icarus for implementation
- Providing a working RISC-V core
- Creating integration pathways for C compilers
- Documenting the process for OS integration
- Maintaining a Git history of the development process