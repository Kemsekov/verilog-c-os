#!/bin/bash

# Script to run xv6-like OS on both ISA simulator and Verilog simulation

set -e  # Exit on any error

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$SCRIPT_DIR"

echo "==========================================="
echo "RISC-V xv6-like OS Simulation Runner"
echo "==========================================="

# Function to build the xv6-like kernel
build_kernel() {
    echo "Building xv6-like kernel..."
    cd "$PROJECT_ROOT"
    make
    echo "Kernel built successfully!"
}

# Function to run on ISA simulator
run_isa() {
    echo "Running xv6-like kernel on ISA simulator..."
    cd "$PROJECT_ROOT"
    make run_isa_sim || echo "ISA simulation completed (exit code indicates kernel exit status)"
}

# Function to run on Verilog simulation
run_verilog() {
    echo "Running xv6-like kernel on Verilog RTL simulation..."
    cd "$PROJECT_ROOT"
    make run_verilog_sim
}

# Function to run on both simulators
run_both() {
    echo "Running xv6-like kernel on ISA simulator..."
    cd "$PROJECT_ROOT"
    make run_isa_sim || echo "ISA simulation completed (exit code indicates kernel exit status)"
    
    echo ""
    echo "Running xv6-like kernel on Verilog RTL simulation..."
    cd "$PROJECT_ROOT"
    make run_verilog_sim
}

# Function to show help
show_help() {
    echo "Usage: $0 [OPTIONS]"
    echo ""
    echo "Options:"
    echo "  -h, --help     Show this help message"
    echo "  -b, --build    Build the kernel only"
    echo "  -i, --isa      Run on ISA simulator only"
    echo "  -v, --verilog  Run on Verilog simulation only"
    echo "  -a, --all      Build and run on both simulators (default)"
    echo ""
    echo "Examples:"
    echo "  $0                    # Build and run on both simulators"
    echo "  $0 --build           # Build only"
    echo "  $0 --isa             # Run ISA simulator only"
    echo "  $0 --verilog         # Run Verilog simulation only"
    echo "  $0 --all             # Build and run both (same as no args)"
}

# Parse command line arguments
BUILD_ONLY=false
ISA_ONLY=false
VERILOG_ONLY=false
ALL_MODE=false

while [[ $# -gt 0 ]]; do
    case $1 in
        -h|--help)
            show_help
            exit 0
            ;;
        -b|--build)
            BUILD_ONLY=true
            shift
            ;;
        -i|--isa)
            ISA_ONLY=true
            shift
            ;;
        -v|--verilog)
            VERILOG_ONLY=true
            shift
            ;;
        -a|--all)
            ALL_MODE=true
            shift
            ;;
        *)
            echo "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

# Determine execution mode
if [ "$BUILD_ONLY" = true ]; then
    # Build only
    build_kernel
elif [ "$ISA_ONLY" = true ] && [ "$VERILOG_ONLY" = false ]; then
    # Run ISA only
    run_isa
elif [ "$VERILOG_ONLY" = true ] && [ "$ISA_ONLY" = false ]; then
    # Run Verilog only
    run_verilog
elif [ "$ALL_MODE" = true ] || ([ "$ISA_ONLY" = false ] && [ "$VERILOG_ONLY" = false ] && [ "$BUILD_ONLY" = false ]); then
    # Default: build and run both
    build_kernel
    
    echo ""
    echo "==========================================="
    echo "Running on ISA Simulator"
    echo "==========================================="
    run_isa
    
    echo ""
    echo "==========================================="
    echo "Running on Verilog RTL Simulation"
    echo "==========================================="
    run_verilog
    
    echo ""
    echo "==========================================="
    echo "Simulation completed on both platforms!"
    echo "==========================================="
else
    # Run both without rebuilding
    run_both
fi

echo "Done."