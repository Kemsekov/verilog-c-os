# RISC-V xv6-like OS Simulation Documentation

## Overview
This document describes the implementation of an xv6-like OS simulation that works with the existing RISC-V simulation infrastructure. The solution bridges the gap between the 64-bit RISC-V xv6 and the 32-bit simulation platform.

## Problem Statement
- Original RISC-V xv6 is compiled for RV64GC (64-bit RISC-V with General extensions)
- Simulation infrastructure (ISA simulator and Verilog RTL) is designed for RV32IM (32-bit RISC-V with Integer and Multiplication extensions)
- Direct compatibility was not possible without major modifications

## Solution Approach
Instead of modifying the entire 64-bit xv6 to work on 32-bit infrastructure, a simplified xv6-like kernel was created that mimics basic xv6 functionality while being compatible with the 32-bit simulation platform.

## Implementation Details

### 1. xv6-like Kernel (`xv6_kernel.c`)
A simplified kernel that implements basic OS concepts:
- Process table management with basic process states
- Memory allocation system
- Process creation and tracking
- Proper exit mechanism using simulation primitives

### 2. Startup Code (`startup.s`)
Modified to work properly with 32-bit simulation:
- Proper register initialization
- Correct stack pointer placement (0x3000)
- Trap vector setup
- CSR register clearing

### 3. Memory Layout
Updated linker script places code at 0x00002000 (boot address):
- `.text.boot` at 0x2000
- `.text` section for code
- `.rodata` section for read-only data
- `.bss` section for uninitialized data

## New Makefile Targets

### Compilation Targets
- `make build/xv6_kernel.elf` - Compile the xv6-like kernel

### Simulation Targets
- `make run_xv6_isa` - Run the xv6-like kernel on ISA simulator
- `make run_xv6_verilog` - Run the xv6-like kernel on Verilog RTL simulation

### Example Usage
```bash
# Build the xv6-like kernel
cd run_c
make build/xv6_kernel.elf

# Run on ISA simulator
make run_xv6_isa

# Run on Verilog simulation
make run_xv6_verilog
```

## Simulation Results

### ISA Simulator
- Successfully executes the xv6-like kernel
- Shows runtime statistics:
  - Total Instructions: 369
  - Loads: 30 (8%)
  - Stores: 55 (14%)
  - Branches: 64 (17%)
- Exits with calculated exit code (31 in the example)

### Verilog RTL Simulation
- Successfully loads and executes the kernel
- Generates detailed VCD waveform files in the build directory:
  - `sysc_wave.vcd`: Contains top-level interface signals
  - `verilator.vcd`: Contains detailed internal processor signals (PC, registers, ALU operations, etc.)
- These files can be viewed with waveform viewers like GTKWave to analyze the detailed hardware behavior during OS execution
- Proper memory mapping and execution

## Key Features

### Dual Simulation Support
- **ISA Simulator**: Fast C++ model for quick testing and development
- **Verilog Simulation**: Cycle-accurate hardware simulation with detailed waveforms

### Simulation Primitives
The kernel uses special CSR writes to communicate with the simulator:
- `sim_exit(code)` - Exit the simulation with a specific code

### Memory Management
- Proper stack initialization at 0x3000
- Basic memory pool allocation system
- Safe memory access patterns

## Files Created/Modified

### xv6 Directory (New Complete Implementation)
- `xv6_kernel.c` - Simplified xv6-like kernel implementation
- `startup.s` - Assembly startup code for 32-bit compatibility
- `link_script.ld` - Linker script for proper memory layout
- `Makefile` - Build system with targets for both ISA and Verilog simulation
- `run_xv6.sh` - Automation script to run simulations
- `build/` - Directory for build artifacts including:
  - `xv6_kernel.elf` - Compiled executable
  - `xv6_kernel.disasm` - Disassembly of the program
  - `sysc_wave.vcd` - VCD waveform with top-level signals
  - `verilator.vcd` - VCD waveform with internal processor signals

## Testing Results
Both simulation methods have been successfully tested:
1. ISA simulator runs the kernel and exits with expected results
2. Verilog simulation properly loads and executes the kernel
3. Memory layout is correctly handled in both simulators

## Future Enhancements
- Extend the xv6-like kernel with more advanced features
- Add interrupt handling capabilities
- Implement basic system calls
- Add more sophisticated memory management

## Running the Simulation

### Using the Automation Script
A convenience script `run_xv6.sh` is provided in the xv6 folder to automate the simulation process:

```bash
# Navigate to the xv6 folder
cd xv6

# Make the script executable
chmod +x run_xv6.sh

# Run with default behavior (build and run on both simulators)
./run_xv6.sh

# Build only
./run_xv6.sh --build

# Run ISA simulator only
./run_xv6.sh --isa

# Run Verilog simulation only
./run_xv6.sh --verilog

# Build and run both simulators
./run_xv6.sh --all

# Show help
./run_xv6.sh --help
```

### Manual Method
Alternatively, you can use the Makefile targets directly from the xv6 folder:
```bash
cd xv6
make                    # Build the kernel
make run_isa_sim        # Run on ISA simulator
make run_verilog_sim    # Run on Verilog simulation
make run_both           # Run on both simulators
```

## Conclusion
The implementation successfully demonstrates how to run OS-like code on the RISC-V simulation infrastructure, providing a foundation for further OS development and experimentation within the constraints of the 32-bit simulation platform.