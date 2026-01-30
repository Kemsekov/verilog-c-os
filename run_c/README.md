# RISC-V C Program and xv6 OS Simulation

This directory contains tools and examples for running C programs and a simplified xv6-like OS on the RISC-V simulator.

## Prerequisites

Before running the simulations, you need to install the following dependencies:

```bash
# On Ubuntu/Debian
sudo apt-get update
sudo apt-get install gcc-riscv64-unknown-elf
sudo apt-get install systemc verilator libelf-dev binutils-dev
```

## Directory Structure

- `run.c` - Template C program that performs computation using inline assembly to prevent optimization
- `startup.s` - Assembly startup code for proper initialization
- `link_script.ld` - Linker script for memory layout
- `Makefile` - Build and run scripts
- `run_c_program.sh` - Automated script for compiling and running C programs
- `README.md` - This documentation

## Available Targets

- `make` or `make all` - Compile run.c to RISC-V ELF (default)
- `make run_isa_sim` - Run run.c on C++ ISA simulator
- `make run_verilog_sim` - Run run.c on Verilog RTL simulation (generates VCD)
- `make run_minimal_isa` - Run minimal.c on C++ ISA simulator
- `make run_minimal_verilog` - Run minimal.c on Verilog RTL simulation
- `make run_simple_compute_isa` - Run simple_compute.c on C++ ISA simulator
- `make run_simple_compute_verilog` - Run simple_compute.c on Verilog RTL simulation
- `make run_xv6_isa` - Run xv6_kernel.c on C++ ISA simulator
- `make run_xv6_verilog` - Run xv6_kernel.c on Verilog RTL simulation
- `make run_both` - Run run.c on both simulators
- `make clean` - Clean build artifacts
- `make install_deps` - Install required dependencies
- `make help` - Show help information

## How It Works

1. The C program is compiled with the RISC-V toolchain targeting RV32IMZicsr architecture
2. The resulting ELF file is loaded into the RISC-V simulator
3. Two types of simulation can be performed:
   - ISA simulator: Fast C++ model of the RISC-V processor (in `../isa_sim`)
   - Verilog RTL simulation: Cycle-accurate hardware simulation that generates VCD waveforms (in `../top_tcm_axi/tb`)

## Simulation Primitives

The programs can use special CSR (Control and Status Register) writes to communicate with the simulator:

- `sim_exit(code)` - Exit the simulation with a specific code

## Memory Layout

The simulation uses the following memory layout based on the RISC-V core specifications:
- 64KB TCM (Tightly Coupled Memory) from 0x00000000 to 0x0000FFFF
- Boot address at 0x00002000 (configurable)
- Stack initialized near the top of memory

## Build Directory Contents

After running a simulation, the `build/` directory contains:

- `program.elf` - Executable and Linkable Format file
- `program.disasm` - Disassembly of the compiled program
- `program_isa.log` - Log from ISA simulator with execution statistics
- `program_verilog.log` - Log from Verilog RTL simulator
- `program_sysc_wave.vcd` - VCD waveform with top-level signals
- `program_verilator.vcd` - VCD waveform with internal processor signals (PC, registers, ALU operations, etc.)

## Example Usage

```bash
# Compile the run.c program
make run.elf

# Run on ISA simulator
make run_isa_sim

# Run on Verilog RTL simulator (generates VCD waveform)
make run_verilog_sim

# Run both simulators
make run_both

# Run with automated script
bash run_c_program.sh run.c
```

## Automated Script Usage

The `run_c_program.sh` script automates the entire workflow:

```bash
bash run_c_program.sh my_program.c
```

This will:
1. Compile the C program to RISC-V ELF
2. Run it on the ISA simulator (fast C++ model)
3. Run it on the Verilog RTL simulator (cycle-accurate hardware model)
4. Generate VCD waveform files showing internal processor signals
5. Save all results to the `build/` directory

## Key Features

- **Dual Simulation**: Programs run on both fast ISA simulator and detailed Verilog RTL simulation
- **Waveform Generation**: Detailed VCD files showing internal processor signals during execution
- **Execution Statistics**: Runtime stats showing instruction counts, loads, stores, branches
- **Optimization Prevention**: Uses inline assembly to ensure actual instructions execute rather than compile-time optimization
- **Automated Workflow**: Single script runs program on both simulators and saves all results

## Memory Access Considerations

The current implementation avoids complex memory operations that could cause access violations in the simulator. String operations and complex data structures are avoided to prevent memory access errors. Instead, computation is performed using registers and simple inline assembly to ensure reliable execution.

## Verilog Simulation and VCD Generation

When running the Verilog simulation, the system generates two VCD files:
- `sysc_wave.vcd`: Contains top-level interface signals
- `verilator.vcd`: Contains detailed internal processor signals including PC, registers, ALU operations, etc.

These files can be viewed with waveform viewers like GTKWave to analyze the detailed hardware behavior during program execution.

## Expected Exit Codes

The exit code depends on the computation performed by the program. For the default `run.c` program:
- Performs arithmetic operations: a=15, b=25
- Computes: sum=a+b, diff=a-b, prod=a*b, loop sum
- Returns: (sum + diff + prod + loop_sum) & 0xFF