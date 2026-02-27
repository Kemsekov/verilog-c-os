# RISC-V Verilog C OS - xv6 Version

This project implements a simplified xv6-like operating system kernel that runs on a 32-bit RISC-V architecture with Verilog RTL simulation support.

## Quick Start with Docker Compose

```bash
docker compose up xv6
```

This will build the Docker image with all necessary dependencies and run the xv6-like kernel simulation.

## Project Structure

```
xv6_version/
├── docker-compose.yml          # Docker Compose configuration for running xv6
├── docker_image/
│   ├── Dockerfile              # Docker image with RISC-V toolchain, SystemC, Verilator
│   └── entrypoint.sh           # Docker entrypoint script
├── xv6/
│   ├── xv6_kernel.c            # Simplified xv6-like kernel with basic OS functionality
│   ├── startup.s               # Assembly startup code and interrupt handlers
│   ├── link_script.ld          # Linker script for proper memory layout
│   ├── Makefile                # Build system for compilation and simulation
│   ├── run_xv6.sh              # Automated script to run simulations
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
```bash
docker compose up xv6
```

### Manual Build and Run
```bash
cd xv6
./run_xv6.sh
```

### Manual Commands
```bash
# Build only
make

# Run ISA simulator only
make run_isa_sim

# Run Verilog simulation only
make run_verilog_sim

# Run both simulators
make run_both

# Clean build artifacts
make clean
```

## Features

- **xv6-like Kernel**: Simplified OS kernel with process management and memory allocation
- **ISA Simulator**: Fast C++ model for quick testing
- **Verilog RTL Simulation**: Cycle-accurate hardware simulation with VCD waveform output
- **Docker Support**: Pre-configured Docker image with all dependencies

## Output Files

After running the simulation, the `xv6/build/` directory will contain:
- `xv6_kernel.elf` - RISC-V executable
- `xv6_kernel.disasm` - Disassembly of the kernel
- `xv6_kernel_isa.log` - ISA simulator log
- `xv6_kernel_verilog.log` - Verilog simulator log
- `sysc_wave.vcd` - SystemC waveform
- `verilator.vcd` - Verilator waveform with internal signals

## Dependencies

- RISC-V GCC toolchain (riscv64-unknown-elf-gcc)
- SystemC 2.3.3
- Verilator
- Docker and Docker Compose (for containerized execution)
