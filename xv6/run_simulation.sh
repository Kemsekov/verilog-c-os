#!/bin/bash

# Script to run RISC-V Verilog simulation with xv6-rv32 OS using Icarus Verilog

echo "==========================================="
echo "RISC-V Verilog Simulation with xv6-rv32 OS"
echo "==========================================="

# Check if required tools are available
if ! command -v iverilog &> /dev/null; then
    echo "Error: iverilog is not installed or not in PATH"
    exit 1
fi

if ! command -v vvp &> /dev/null; then
    echo "Error: vvp is not installed or not in PATH"
    exit 1
fi

# Set up directories
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$SCRIPT_DIR"
SIM_DIR="$PROJECT_ROOT/testbench"
TOOLS_DIR="$PROJECT_ROOT/tools"

# Parse command line arguments
UART_OUTPUT=0
for arg in "$@"; do
    case $arg in
        --uart)
            UART_OUTPUT=1
            shift
            ;;
        --help)
            echo "Usage: $0 [options]"
            echo "Options:"
            echo "  --uart    Enable UART output logging to build/uart_output.log"
            echo "  --help    Show this help message"
            exit 0
            ;;
    esac
done

echo "Project Root: $PROJECT_ROOT"
echo "Simulation Directory: $SIM_DIR"
echo "Tools Directory: $TOOLS_DIR"
if [ $UART_OUTPUT -eq 1 ]; then
    echo "UART Output Logging: ENABLED"
else
    echo "UART Output Logging: DISABLED"
fi

# Check if required files exist
if [ ! -f "$PROJECT_ROOT/misc/xv6.mif" ]; then
    echo "Error: $PROJECT_ROOT/misc/xv6.mif not found"
    exit 1
fi

if [ ! -f "$PROJECT_ROOT/xv6-rv32/fs.img" ]; then
    echo "Warning: Filesystem image $PROJECT_ROOT/xv6-rv32/fs.img not found"
    echo "The OS may not have user programs available"
fi

# Create tools directory if it doesn't exist
mkdir -p "$TOOLS_DIR"

# Convert MIF to hex format if not already done
if [ ! -f "$TOOLS_DIR/xv6_kernel.hex" ]; then
    echo "Converting MIF file to hex format..."
    python3 "$TOOLS_DIR/convert_mif.py" "$PROJECT_ROOT/misc/xv6.mif" "$TOOLS_DIR/xv6_kernel.hex"
    if [ $? -ne 0 ]; then
        echo "Error: Failed to convert MIF file"
        exit 1
    fi
fi

# Change to simulation directory
cd "$SIM_DIR" || exit 1

# Clean previous simulation files
echo "Cleaning previous simulation files..."
rm -f cpu_with_mem

# Compile the simulation
echo "Compiling the simulation..."
iverilog -o cpu_with_mem \
    cpu_mem_system_tb.v \
    ../src/CPU/*.v \
    ../src/modules/*.v \
    ../src/UART/*.v \
    ../src/Memory/generic_*.v \
    ../src/Memory/lpm_divide_generic.v \
    ../src/Memory/memory_top_generic.v \
    ../src/Memory/memory_map.v \
    ../src/Memory/test_mem.v \
    ../src/Memory/plic_mem.v \
    ../src/Memory/hex_mem.v \
    ../src/Memory/gpio_interface.v \
    ../src/Memory/sdram_controller.v \
    ../src/Memory/sd_card_controller.v \
    ../src/Memory/debug_monitor.v \
    -DDEBUG_VERBOSITY=2 \
    -g2012

if [ $? -ne 0 ]; then
    echo "Error: Compilation failed"
    exit 1
fi

echo "Compilation successful!"

# Run the simulation
echo "Running the simulation..."
echo "The CPU will execute the xv6 kernel starting at address 0x80000000"
echo "Simulation will run for approximately 100 million cycles or until completion"
echo "VCD waveform output will be saved to: testbench/cpu_trace.vcd"
if [ $UART_OUTPUT -eq 1 ]; then
    echo "UART output will be logged to: build/uart_output.log"
fi
echo ""

./cpu_with_mem

# Create build directory and copy VCD file
BUILD_DIR="$PROJECT_ROOT/build"
mkdir -p "$BUILD_DIR"
if [ -f "$SIM_DIR/cpu_trace.vcd" ]; then
    cp "$SIM_DIR/cpu_trace.vcd" "$BUILD_DIR/cpu_trace.vcd"
    echo "VCD waveform file copied to: build/cpu_trace.vcd"
fi

# Copy UART output log file if it exists
if [ -f "$SIM_DIR/uart_output.log" ]; then
    cp "$SIM_DIR/uart_output.log" "$BUILD_DIR/uart_output.log"
    echo "UART output log copied to: build/uart_output.log"
    echo ""
    echo "==========================================="
    echo "UART Output from XV6 Kernel:"
    echo "==========================================="
    cat "$BUILD_DIR/uart_output.log"
    echo "==========================================="
fi

if [ $? -eq 0 ]; then
    echo ""
    echo "==========================================="
    echo "Simulation completed successfully!"
    echo "The RISC-V CPU successfully executed the xv6 kernel"
    echo "Check the output above for CPU execution trace"
    echo "VCD waveform file: testbench/cpu_trace.vcd"
    echo "VCD waveform file (copy): build/cpu_trace.vcd"
    echo "Use GTKWave to view: gtkwave build/cpu_trace.vcd"
    if [ -f "$BUILD_DIR/uart_output.log" ]; then
        echo "UART output log: build/uart_output.log"
    fi
    echo "==========================================="
else
    echo ""
    echo "==========================================="
    echo "Simulation ended with errors"
    echo "Check the output above for details"
    echo "==========================================="
    exit 1
fi