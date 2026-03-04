#!/usr/bin/env python3
"""
xv6 Load-Use Hazard Fixer

This script patches the xv6 kernel hex file to avoid load-use hazards
that the simple CPU cannot handle.

Hazard patterns detected:
- lw reg, offset followed by any instruction using reg
- lh/lb/lhu/lbu followed by any instruction using the register

Fix strategy: Insert NOP after every load instruction
"""

import sys

# RISC-V instruction formats
def is_load(instr):
    """Check if instruction is a load (LB, LH, LW, LBU, LHU)"""
    opcode = instr & 0x7F
    return opcode == 0x03  # All loads have opcode 0x03

def get_rd(instr):
    """Get destination register number (bits 11:7)"""
    return (instr >> 7) & 0x1F

def get_rs1(instr):
    """Get source register 1 (bits 19:15)"""
    return (instr >> 15) & 0x1F

def get_rs2(instr):
    """Get source register 2 (bits 24:20)"""
    return (instr >> 20) & 0x1F

def uses_register(instr, reg):
    """Check if instruction uses the given register as source"""
    return get_rs1(instr) == reg or get_rs2(instr) == reg

def is_nop(instr):
    """Check if instruction is NOP (addi x0, x0, 0)"""
    return instr == 0x00000013

def insert_nops(input_hex, output_hex):
    """Insert NOPs after load instructions to avoid hazards"""
    
    # Read input hex file
    with open(input_hex, 'r') as f:
        lines = [line.strip() for line in f.readlines() if line.strip()]
    
    # Convert to integers
    instructions = []
    for line in lines:
        try:
            instructions.append(int(line, 16))
        except ValueError:
            instructions.append(0)
    
    print(f"Loaded {len(instructions)} bytes from {input_hex}")
    
    # Find hazards and insert NOPs
    fixed = []
    hazards_fixed = 0
    
    i = 0
    while i < len(instructions):
        instr = instructions[i]
        fixed.append(instr)
        
        # Check if this is a load instruction
        if is_load(instr):
            rd = get_rd(instr)
            if rd != 0:  # x0 is zero register, no hazard
                # Look at next instruction
                if i + 1 < len(instructions):
                    next_instr = instructions[i + 1]
                    # Check if next instruction uses the loaded register
                    if uses_register(next_instr, rd):
                        # Insert NOP
                        fixed.append(0x00000013)  # NOP
                        hazards_fixed += 1
                        print(f"  Hazard at offset {i*4:06x}: lw x{rd} followed by instruction using x{rd}")
        i += 1
    
    print(f"\nFixed {hazards_fixed} load-use hazards")
    print(f"Original size: {len(instructions)} bytes")
    print(f"Fixed size: {len(fixed)} bytes")
    
    # Write output hex file
    with open(output_hex, 'w') as f:
        for byte_val in fixed:
            f.write(f"{byte_val:02x}\n")
    
    print(f"Output written to {output_hex}")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print(f"Usage: {sys.argv[0]} <input.hex> <output.hex>")
        sys.exit(1)
    
    insert_nops(sys.argv[1], sys.argv[2])
