# RISC-V xv6-like OS Simulation

This directory contains a simplified xv6-like OS kernel that runs on the RISC-V simulation infrastructure. The implementation bridges the gap between the 64-bit RISC-V xv6 and the 32-bit simulation platform.

## Project Structure

```
xv6_riscv_rv32/
├── xv6_kernel.c        # Simplified xv6-like kernel with basic OS functionality
├── startup.s           # Assembly startup code for 32-bit RISC-V
├── link_script.ld      # Linker script for proper memory layout
├── Makefile            # Build system with targets for ISA and Verilog simulation
├── run_xv6.sh          # Automation script to run simulations
├── README.md           # This file
└── build/              # Build artifacts directory
    ├── xv6_kernel.elf      # Compiled executable
    ├── xv6_kernel.disasm   # Disassembly of the program
    ├── sysc_wave.vcd       # VCD waveform with top-level interface signals
    ├── verilator.vcd       # VCD waveform with internal processor signals (PC, registers, ALU, etc.)
    └── link.ld             # Copy of linker script used for compilation
```

## What the xv6-like Kernel Does

The simplified kernel implements basic OS concepts:
- Process table management with basic process states (UNUSED, RUNNABLE, RUNNING)
- Memory allocation system with a simple memory pool
- Process creation and tracking functionality
- Basic system operations and calculations
- Proper exit mechanism using simulation primitives

## How to Run the Simulation

### Using the Automation Script

```bash
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

### Using Makefile Targets

```bash
# Build the kernel
make

# Run on ISA simulator (fast C++ model)
make run_isa_sim

# Run on Verilog RTL simulation (cycle-accurate hardware model)
make run_verilog_sim

# Run on both simulators
make run_both

# Clean build artifacts
make clean

# Show help
make help
```

## What Happens When Running the Script

When you run `./run_xv6.sh` (default behavior):

1. **Build Phase**: The script compiles `xv6_kernel.c` and `startup.s` into a RISC-V ELF executable (`xv6_kernel.elf`)
2. **ISA Simulation**: Runs the kernel on the fast ISA simulator, showing execution statistics
3. **Verilog Simulation**: Runs the kernel on the detailed Verilog RTL simulation, generating VCD waveform files
4. **Results**: Both simulations execute the same kernel code, demonstrating dual-platform compatibility

## Simulation Infrastructure

### ISA Simulator (C++ Model)
- Fast execution for rapid development and testing
- Shows runtime statistics:
  - Total Instructions executed
  - Load, Store, and Branch operations with percentages
- Uses simulation primitives for program exit

### Verilog RTL Simulation (Hardware Model)
- Cycle-accurate hardware simulation
- Generates detailed VCD waveform files for analysis
- Shows internal processor signals including PC, registers, ALU operations, etc.
- Proper memory mapping and execution

## Expected Build Directory Contents

After running the simulation, the `build/` directory will contain:

- **`xv6_kernel.elf`**: The compiled RISC-V executable file
- **`xv6_kernel.disasm`**: Disassembly of the compiled program for inspection
- **`xv6_kernel.o`**: Object file for the kernel code
- **`startup.o`**: Object file for the assembly startup code
- **`link.ld`**: Copy of the linker script used for compilation
- **`sysc_wave.vcd`**: VCD waveform file with top-level interface signals (generated after Verilog simulation)
- **`verilator.vcd`**: VCD waveform file with detailed internal processor signals (PC, registers, ALU operations, etc.) (generated after Verilog simulation)

## Memory Layout

The kernel is loaded at address `0x00002000` (boot address) with:
- `.text.boot` section at 0x2000
- `.text` section for code
- `.rodata` section for read-only data
- `.bss` section for uninitialized data
- Stack initialized at 0x3000

## Simulation Primitives

The kernel uses special CSR (Control and Status Register) writes to communicate with the simulator:
- `sim_exit(code)` - Exit the simulation with a specific exit code

## Key Features

- **Dual Simulation Support**: Same kernel runs on both fast ISA model and detailed Verilog model
- **Waveform Generation**: Detailed VCD files for hardware behavior analysis
- **Execution Statistics**: Runtime stats showing instruction counts and operations
- **Proper Memory Management**: Safe memory access patterns and initialization
- **Self-Contained**: All files and artifacts contained within this directory