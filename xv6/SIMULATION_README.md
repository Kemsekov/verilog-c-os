# RISC-V Verilog Simulation with xv6-rv32

This project implements a RISC-V CPU in Verilog that can run the xv6 operating system.

## Prerequisites

- Icarus Verilog (`iverilog` and `vvp`)
- Python 3 (for MIF conversion)

## Files Included

- `misc/xv6.mif`: Pre-compiled xv6 kernel in MIF format
- `xv6-rv32/fs.img`: Filesystem image with user programs
- `tools/convert_mif.py`: Python script to convert MIF to hex format
- `testbench/cpu_mem_system_tb.v`: Testbench for CPU + memory system
- `src/Memory/generic_*.v`: Generic memory implementations
- `run_simulation.sh`: Script to run the simulation

## Running the Simulation

Execute the simulation using the provided script:

```bash
./run_simulation.sh
```

The script will:
1. Convert the MIF kernel file to hex format
2. Compile the Verilog sources
3. Run the simulation with the xv6 kernel
4. Show the CPU execution trace

## What to Expect

During simulation, you'll see output similar to:
```
Time: 15, PC: 80000000, Addr: 80000000, Data: 00000000, Write: 0
Time: 205, PC: 80000004, Addr: 80000004, Data: 00000000, Write: 0
...
```

This shows:
- Time: Simulation time in nanoseconds
- PC: Program Counter value
- Addr: Memory address being accessed
- Data: Data being read/written
- Write: Whether it's a write (1) or read (0) operation

The CPU will execute the xv6 kernel starting at address 0x80000000 and access various peripherals including UART for console I/O.

## Troubleshooting

If you encounter issues:
1. Verify that Icarus Verilog is installed and in your PATH
2. Check that the `misc/xv6.mif` file exists
3. Ensure you have write permissions in the testbench directory

## Notes

- The simulation uses generic Verilog implementations to replace Altera-specific IP cores
- The CPU implements RV32IMA_Zicsr instruction set architecture
- Memory mapping matches QEMU's virt machine for compatibility
- UART access at 0x10000000 enables console I/O