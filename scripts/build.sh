#!/bin/bash

# Build script for RISC-V Virtual Device
# Compiles and runs the simulation using Icarus Verilog

set -e  # Exit on any error

echo "Building RISC-V Virtual Device..."

# Create build directory
mkdir -p build

# Compile the design
echo "Compiling design..."
iverilog -o build/riscv_virtual_device_enhanced \
  -I src \
  src/riscv_alu.v \
  src/riscv_core.v \
  src/riscv_csr.v \
  src/riscv_csr_regfile.v \
  src/riscv_decode.v \
  src/riscv_decoder.v \
  src/riscv_defs.v \
  src/riscv_divider.v \
  src/riscv_exec.v \
  src/riscv_fetch.v \
  src/riscv_issue.v \
  src/riscv_lsu.v \
  src/riscv_mmu.v \
  src/riscv_multiplier.v \
  src/riscv_pipe_ctrl.v \
  src/riscv_regfile.v \
  src/riscv_trace_sim.v \
  src/riscv_xilinx_2r1w.v \
  src/memory_controller.v \
  src/program_loader.v \
  src/riscv_virtual_system.v \
  src/riscv_virtual_device_enhanced.v \
  tb/riscv_virtual_device_enhanced_tb.v

echo "Compilation completed."

# Run simulation
echo "Running simulation..."
vvp build/riscv_virtual_device_enhanced

echo "Simulation completed."
echo "Check riscv_virtual_device_enhanced.vcd for waveform data."