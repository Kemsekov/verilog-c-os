Majority of code is taken from library:
https://github.com/ultraembedded/riscv

## Dependencies

The following dependencies are required to run the RISC-V simulation environment:

### Build Dependencies
- **RISC-V GCC Toolchain**: `gcc-riscv64-unknown-elf` or `gcc-riscv32-unknown-elf`
- **SystemC**: Version 2.3.1 or compatible
- **Verilator**: For Verilog RTL simulation
- **Build Tools**: `make`, `g++`, `libelf-dev`, `binutils-dev`

### Installation on Ubuntu/Debian:
```bash
# Install RISC-V toolchain
sudo apt-get install gcc-riscv64-unknown-elf

# Install SystemC
wget https://github.com/accellera-official/systemc/releases/download/2.3.3/systemc-2.3.3.tar.gz
tar -xzf systemc-2.3.3.tar.gz
cd systemc-2.3.3
mkdir build && cd build
../configure --prefix=/usr/local/systemc-2.3.1
make && sudo make install

# Install Verilator
sudo apt-get install verilator

# Install build dependencies
sudo apt-get install build-essential libelf-dev binutils-dev
```

Testbench have been reworked a bit.

## Changes Made to Project

### To work with new verilator version:
- Updated testbench to handle newer Verilator API requirements
- Fixed CSR access mechanisms to work with newer SystemC/Verilator versions
- Modified trace enable mechanism to work after simulation elaboration
- Updated memory access patterns to avoid invalid memory access errors

### To track verilog operations:
- Enabled detailed VCD waveform generation for internal processor signals
- Added support for both SystemC-level and Verilator-level tracing
- Created separate VCD files for top-level signals and internal processor signals
- Waveforms now show detailed internal processor activity including PC, registers, ALU operations, etc.

### Other changes made to project:
- Created `run_c` directory with complete C program simulation infrastructure
- Developed startup code and linker scripts for RISC-V programs
- Implemented simulation control primitives for program exit and output
- Added comprehensive Makefile with targets for both ISA and Verilog simulation
- Fixed compatibility issues with newer versions of Verilator and SystemC
- Created automated script for running C programs on both simulators

## Implemented Features

### run_c Folder
The `run_c` folder contains a complete infrastructure for running C programs on the RISC-V simulator:

- **Purpose**: Compile and run C programs on both the ISA simulator and Verilog RTL simulation
- **Contents**:
  - `run.c`: Template C program that performs computation
  - `startup.s`: Assembly startup code and interrupt handlers
  - `link_script.ld`: Linker script for placing code at appropriate addresses
  - `Makefile`: Complete build system for compilation and simulation
  - `run_c_program.sh`: Automated script to run C programs on both simulators

### xv6_riscv_rv32 Folder
The `xv6_riscv_rv32` folder contains a simplified xv6-like OS kernel that runs on the RISC-V simulation infrastructure:

- **Purpose**: Demonstrate OS-like functionality on the 32-bit RISC-V simulation platform
- **Contents**:
  - `xv6_kernel.c`: Simplified xv6-like kernel with basic OS functionality
  - `startup.s`: Assembly startup code for 32-bit compatibility
  - `link_script.ld`: Linker script for proper memory layout
  - `Makefile`: Build system with targets for both ISA and Verilog simulation
  - `run_xv6.sh`: Automation script to run simulations
  - `build/`: Directory for build artifacts including ELF files and VCD waveforms

#### xv6-like Kernel Features:
- Process table management with basic process states
- Memory allocation system with a simple memory pool
- Process creation and tracking functionality
- Proper exit mechanism using simulation primitives
- Compatible with 32-bit RISC-V simulation infrastructure

#### xv6 Simulation Usage:
```bash
cd xv6_riscv_rv32
./run_xv6.sh
```

This will:
1. Compile the xv6-like kernel to RISC-V ELF
2. Run it on the ISA simulator (fast C++ model)
3. Run it on the Verilog RTL simulator (cycle-accurate hardware model)
4. Generate VCD waveform files showing internal processor signals during OS execution
5. Save all results to the `build/` directory

### Usage
To run a C program:
```bash
bash run_c_program.sh my_program.c
```

This will:
1. Compile the C program to RISC-V ELF
2. Run it on the ISA simulator (fast C++ model)
3. Run it on the Verilog RTL simulator (cycle-accurate hardware model)
4. Generate VCD waveform files showing internal processor signals
5. Save all results to the `build/` directory

### run_c/build Directory
The `build/` directory contains all output files after running a simulation:

- `program.elf`: RISC-V executable file
- `program.disasm`: Disassembly of the compiled program
- `program_isa.log`: Log from ISA simulator with execution statistics
- `program_verilog.log`: Log from Verilog RTL simulator
- `program_sysc_wave.vcd`: VCD waveform with top-level signals
- `program_verilator.vcd`: VCD waveform with internal processor signals (PC, registers, ALU, etc.)

### xv6_riscv_rv32/build Directory
The `build/` directory in the xv6 folder contains all output files after running the OS simulation:

- `xv6_kernel.elf`: RISC-V executable file for the xv6-like kernel
- `xv6_kernel.disasm`: Disassembly of the compiled kernel
- `xv6_kernel.o`: Object file for the kernel code
- `startup.o`: Object file for the assembly startup code
- `sysc_wave.vcd`: VCD waveform with top-level interface signals
- `verilator.vcd`: VCD waveform with internal processor signals (PC, registers, ALU operations, etc.)

### Simulation Modes
The system runs programs on two different simulators:

1. **ISA Simulator**: Fast C++ model that executes instructions quickly, shows execution statistics
2. **Verilog RTL Simulator**: Cycle-accurate hardware simulation that generates detailed waveforms showing internal processor operation

Both simulators execute the same program and produce consistent results, allowing for both fast development and detailed hardware analysis.

