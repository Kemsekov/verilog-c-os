# RISC-V Verilog C OS - run_c Version

This project provides infrastructure for compiling and running C programs on a 32-bit RISC-V architecture with both ISA and Verilog RTL simulation support.

## Quick Start with Docker Compose

```bash
docker compose up run_c
```

This will build the Docker image with all necessary dependencies and run the default C program (run.c) simulation.

To run a custom C program:
```bash
docker compose run --rm run_c bash -c "cd /workspace/run_c && ./run_c_program.sh your_program.c"
```

## Project Structure

```
run_c_version/
├── docker-compose.yml          # Docker Compose configuration for running C programs
├── docker_image/
│   ├── Dockerfile              # Docker image with RISC-V toolchain, SystemC, Verilator
│   └── entrypoint.sh           # Docker entrypoint script
├── run_c/
│   ├── run.c                   # Example C program
│   ├── Makefile                # Build system for compilation and simulation
│   ├── run_c_program.sh        # Automated script to run any C program
│   ├── lib/
│   │   ├── startup.s           # Assembly startup code and interrupt handlers
│   │   ├── link_script.ld      # Linker script for proper memory layout
│   │   ├── utils.c             # Utility functions for simulation
│   │   └── utils.h             # Utility function headers
│   └── build/                  # Build artifacts (generated after build)
├── core/
│   └── riscv/                  # RISC-V processor core Verilog modules
│       ├── riscv_core.v        # Top-level RISC-V core module
│       ├── riscv_alu.v         # ALU (Arithmetic Logic Unit)
│       ├── riscv_decode.v      # Instruction decoder
│       ├── riscv_exec.v        # Instruction execution unit
│       ├── riscv_fetch.v       # Instruction fetch unit
│       ├── riscv_regfile.v     # Register file
│       ├── riscv_csr.v         # Control and Status Registers
│       ├── riscv_lsu.v         # Load/Store Unit
│       ├── riscv_mmu.v         # Memory Management Unit
│       └── ...                 # Other core modules
├── isa_sim/                    # ISA (Instruction Set Architecture) simulator
│   ├── riscv-sim               # Pre-built ISA simulator binary
│   ├── riscv.cpp               # ISA simulator source
│   ├── memory.h                # Memory model for simulation
│   └── ...                     # Other simulator files
├── top_tcm_axi/                # Top-level testbench with TCM (Tightly Coupled Memory)
│   ├── src_v/                  # Verilog source files for top-level
│   │   ├── riscv_tcm_top.v     # RISC-V top-level with TCM
│   │   ├── tcm_mem.v           # TCM memory module
│   │   └── ...                 # Other top-level modules
│   └── tb/                     # Testbench directory
│       ├── main.cpp            # SystemC testbench main
│       ├── testbench.h         # Testbench header
│       └── ...                 # Other testbench files
└── doc/
    ├── overview.png            # Project overview diagram
    ├── core_exec.png           # Core execution diagram
    └── ...                     # Other documentation images
```

## Usage

### Run with Docker Compose (Recommended)

Run the default example:
```bash
docker compose up run_c
```

Run a custom C program:
```bash
# Place your .c file in run_c/ directory
docker compose run --rm run_c bash -c "cd /workspace/run_c && ./run_c_program.sh my_program.c"
```

### Manual Build and Run
```bash
cd run_c

# Build and run
./run_c_program.sh run.c

# Or use Makefile directly
make              # Build only
make run_isa_sim  # Run ISA simulator
make run_verilog_sim  # Run Verilog simulation
make clean        # Clean build artifacts
```

## Features

- **Simple C Program Execution**: Compile and run C programs on RISC-V
- **ISA Simulator**: Fast C++ model for quick testing and debugging
- **Verilog RTL Simulation**: Cycle-accurate hardware simulation with VCD waveform output
- **Docker Support**: Pre-configured Docker image with all dependencies
- **Standalone Library**: Reusable startup code and linker scripts

## Output Files

After running the simulation, the `run_c/build/` directory will contain:
- `program.elf` - RISC-V executable
- `program.disasm` - Disassembly of the program
- `program_isa.log` - ISA simulator log with execution statistics
- `program_verilog.log` - Verilog simulator log
- `program_sysc_wave.vcd` - SystemC waveform
- `program_verilator.vcd` - Verilator waveform with internal signals

## Writing Your Own C Programs

Create a C file with the following structure:

```c
// Include simulation exit primitive
void sim_exit(int code);

int main() {
    // Your code here
    int result = 42;
    
    // Exit simulation with result
    sim_exit(result);
    return 0;
}
```

Use `sim_exit(code)` to terminate the simulation and return a result code.

## Dependencies

- RISC-V GCC toolchain (riscv64-unknown-elf-gcc)
- SystemC 2.3.3
- Verilator
- Docker and Docker Compose (for containerized execution)
