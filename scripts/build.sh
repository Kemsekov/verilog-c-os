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
  -I third_party/ultraembedded_riscv \
  third_party/ultraembedded_riscv/riscv_alu.v \
  third_party/ultraembedded_riscv/riscv_core.v \
  third_party/ultraembedded_riscv/riscv_csr.v \
  third_party/ultraembedded_riscv/riscv_csr_regfile.v \
  third_party/ultraembedded_riscv/riscv_decode.v \
  third_party/ultraembedded_riscv/riscv_decoder.v \
  third_party/ultraembedded_riscv/riscv_defs.v \
  third_party/ultraembedded_riscv/riscv_divider.v \
  third_party/ultraembedded_riscv/riscv_exec.v \
  third_party/ultraembedded_riscv/riscv_fetch.v \
  third_party/ultraembedded_riscv/riscv_issue.v \
  third_party/ultraembedded_riscv/riscv_lsu.v \
  third_party/ultraembedded_riscv/riscv_mmu.v \
  third_party/ultraembedded_riscv/riscv_multiplier.v \
  third_party/ultraembedded_riscv/riscv_pipe_ctrl.v \
  third_party/ultraembedded_riscv/riscv_regfile.v \
  third_party/ultraembedded_riscv/riscv_trace_sim.v \
  third_party/ultraembedded_riscv/riscv_xilinx_2r1w.v \
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