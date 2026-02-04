# RISC-V C Program Simulation Environment

This directory contains a RISC-V C program simulation environment that demonstrates actual instruction execution on a RISC-V processor model.

## Project Structure

```
run_c/
├── build/              # Build artifacts and simulation outputs
├── lib/                # Library files (assembly, linker scripts, headers)
│   ├── startup.s       # Assembly startup code with stack pointer initialization
│   ├── link_script.ld  # Linker script for memory layout
│   ├── utils.h         # Header file with utility function declarations
│   └── utils.c         # Utility functions implementation
├── run.c               # Main application code
├── Makefile            # Build automation
├── run_c_program.sh    # Simulation runner script
└── README.md           # This file
```

## Features

- **RISC-V ISA Simulation**: Runs C code on a RISC-V instruction set simulator
- **Verilog RTL Simulation**: Supports RTL-level simulation with waveform generation
- **Custom Startup Code**: Properly configured stack pointer initialization to prevent memory access errors
- **Utility Functions**: Includes simulation helpers, string conversion, and memory management functions
- **Modular Design**: Separated core application logic from infrastructure code

## Key Components

### Application (`run.c`)
- Implements the Collatz conjecture algorithm as a demonstration program
- Uses utility functions from the `lib` directory

### Utilities (`lib/utils.*`)
- `sim_exit`, `sim_putc`, `print`: Simulation control and output functions
- `int_to_str`, `print_int`: Number to string conversion utilities
- Memory functions: `memset`, `memcpy`, `memcmp` implementations for freestanding environment

### Infrastructure (`lib/.*`)
- `startup.s`: Assembly startup code with properly configured stack pointer (0x4000)
- `link_script.ld`: Linker script defining memory layout starting at 0x2000

### Build & Simulation
- `Makefile`: Automates compilation and linking process
- `run_c_program.sh`: Orchestrates ISA and Verilog simulations with proper memory limits

## Memory Configuration

- Program starts at address `0x2000`
- Stack pointer initialized to `0x4000` to prevent underflow during function calls
- ISA simulator configured with 512KB memory range (`0x00000000 - 0x0007ffff`)
- Proper handling of function calls and memory access patterns

## Usage

Execute with:
```bash
# Direct execution
bash run_c_program.sh run.c

# Or via Docker Compose
docker compose up run_c
```

The program will compile the RISC-V executable, run ISA simulation, and then Verilog RTL simulation, generating logs and waveform files in the build directory.