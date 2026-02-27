# RISC-V Verilog C OS

This project provides a complete infrastructure for running C programs and operating systems on a 32-bit RISC-V architecture with both ISA simulation and Verilog RTL simulation support.

## Project Structure

The project is organized into two separate versions, each with its own Docker configuration and dependencies:

```
verilog-c-os/
├── README.md                   # This file - main project documentation
├── LICENSE                     # Project license
├── .gitignore                  # Git ignore patterns
│
├── xv6_version/                # xv6-like OS version
│   ├── README.md               # Documentation for xv6 version
│   ├── docker-compose.yml      # Docker Compose config for xv6
│   ├── docker_image/           # Docker image configuration
│   │   ├── Dockerfile          # Docker image with all dependencies
│   │   └── entrypoint.sh       # Container entrypoint script
│   ├── xv6/                    # xv6-like kernel source
│   │   ├── xv6_kernel.c        # Simplified xv6-like OS kernel
│   │   ├── startup.s           # Assembly startup code
│   │   ├── link_script.ld      # Linker script
│   │   ├── Makefile            # Build system
│   │   ├── run_xv6.sh          # Run script
│   │   └── build/              # Build output directory
│   ├── core/riscv/             # RISC-V processor core (Verilog)
│   ├── isa_sim/                # ISA simulator (C++ model)
│   ├── top_tcm_axi/            # Top-level testbench with TCM
│   └── doc/                    # Documentation images
│
└── run_c_version/              # Standalone C programs version
    ├── README.md               # Documentation for run_c version
    ├── docker-compose.yml      # Docker Compose config for run_c
    ├── docker_image/           # Docker image configuration
    │   ├── Dockerfile          # Docker image with all dependencies
    │   └── entrypoint.sh       # Container entrypoint script
    ├── run_c/                  # C program infrastructure
    │   ├── run.c               # Example C program
    │   ├── lib/                # Support library
    │   │   ├── startup.s       # Assembly startup code
    │   │   ├── link_script.ld  # Linker script
    │   │   └── utils.c         # Utility functions
    │   ├── Makefile            # Build system
    │   ├── run_c_program.sh    # Run script for any C program
    │   └── build/              # Build output directory
    ├── core/riscv/             # RISC-V processor core (Verilog)
    ├── isa_sim/                # ISA simulator (C++ model)
    ├── top_tcm_axi/            # Top-level testbench with TCM
    └── doc/                    # Documentation images
```

## Quick Start

### Running xv6-like OS

```bash
cd xv6_version
docker compose up xv6
```

### Running C Programs

```bash
cd run_c_version
docker compose up run_c
```

To run a custom C program:
```bash
cd run_c_version
docker compose run --rm run_c bash -c "cd /workspace/run_c && ./run_c_program.sh your_program.c"
```

## Versions

### xv6_version
This version implements a simplified xv6-like operating system kernel with:
- Process table management
- Memory allocation system
- Basic OS functionality
- Compatible with 32-bit RISC-V simulation

See [xv6_version/README.md](xv6_version/README.md) for detailed documentation.

### run_c_version
This version provides infrastructure for running standalone C programs with:
- Simple compilation to RISC-V ELF
- Support for custom C programs
- Reusable library with startup code and linker scripts
- Simulation control primitives

See [run_c_version/README.md](run_c_version/README.md) for detailed documentation.

## Simulation Modes

Both versions support two simulation modes:

1. **ISA Simulator** - Fast C++ model that executes instructions quickly
2. **Verilog RTL Simulator** - Cycle-accurate hardware simulation with VCD waveforms

## Dependencies

All dependencies are included in the Docker images:
- RISC-V GCC toolchain (riscv64-unknown-elf-gcc)
- SystemC 2.3.3
- Verilator
- Build tools (make, g++, libelf-dev, binutils-dev)

## Manual Installation (Without Docker)

If you prefer to run without Docker, install the following dependencies:

```bash
# Install RISC-V toolchain
sudo apt-get install gcc-riscv64-unknown-elf

# Install SystemC
wget https://github.com/accellera-official/systemc/releases/download/2.3.3/systemc-2.3.3.tar.gz
tar -xzf systemc-2.3.3.tar.gz
cd systemc-2.3.3
mkdir build && cd build
../configure --prefix=/usr/local/systemc-2.3.4
make && sudo make install

# Install Verilator
sudo apt-get install verilator

# Install build dependencies
sudo apt-get install build-essential libelf-dev binutils-dev
```

## Output Files

After running simulations, the `build/` directory in each version will contain:
- `.elf` - RISC-V executable
- `.disasm` - Disassembly of the program/kernel
- `_isa.log` - ISA simulator log
- `_verilog.log` - Verilog simulator log
- `_sysc_wave.vcd` - SystemC waveform
- `_verilator.vcd` - Verilator waveform with internal processor signals

## License

See [LICENSE](LICENSE) for licensing information.
