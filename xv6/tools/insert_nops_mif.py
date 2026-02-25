#!/usr/bin/env python3
"""
Insert NOP after every instruction in a MIF file.
MIF files use 8-bit width, so each 32-bit instruction is 4 bytes.
NOP = 0x00000013 = bytes: 13 00 00 00 (little-endian)
"""

import sys
import re

NOP_BYTES = [0x13, 0x00, 0x00, 0x00]

def parse_mif(input_path):
    """Parse MIF file and extract header and content."""
    with open(input_path, 'r') as f:
        content = f.read()
    
    # Split into header and content sections
    # Header is everything before "CONTENT BEGIN"
    # Content is everything between "CONTENT BEGIN" and the final ";"
    
    match = re.search(r'CONTENT\s+BEGIN\s*\n(.*)', content, re.DOTALL)
    if not match:
        raise ValueError("Could not find CONTENT BEGIN section")
    
    header = content[:content.index('CONTENT BEGIN') + len('CONTENT BEGIN') + 1]
    content_section = match.group(1)
    
    # Parse content entries
    # Format can be:
    #   address : value;
    # or: address : value;
    
    entries = {}
    for line in content_section.strip().split('\n'):
        line = line.strip()
        if not line or line == ';':
            continue
        
        # Remove trailing semicolon
        if line.endswith(';'):
            line = line[:-1].strip()
        
        # Parse address : value
        if ':' in line:
            parts = line.split(':')
            addr_str = parts[0].strip()
            value_str = parts[1].strip()
            
            # Parse address (could be hex like "0", "a", "10", etc.)
            addr = int(addr_str, 16)
            
            # Parse value (hex byte)
            value = int(value_str, 16)
            
            entries[addr] = value
    
    return header, entries

def insert_nops(entries):
    """Insert NOP bytes after every 4-byte instruction."""
    if not entries:
        return entries
    
    # Find the maximum address
    max_addr = max(entries.keys())
    
    # Create new entries dict
    new_entries = {}
    
    # Process each 4-byte instruction
    addr = 0
    new_addr = 0
    while addr <= max_addr + 3:
        # Read 4 bytes (one instruction)
        instruction_bytes = []
        for i in range(4):
            if addr + i in entries:
                instruction_bytes.append(entries[addr + i])
            else:
                instruction_bytes.append(0)
        
        # Write the instruction bytes to new location
        for i, byte in enumerate(instruction_bytes):
            new_entries[new_addr + i] = byte
        
        # Insert NOP bytes after the instruction
        for i, nop_byte in enumerate(NOP_BYTES):
            new_entries[new_addr + 4 + i] = nop_byte
        
        addr += 4
        new_addr += 8  # 4 bytes instruction + 4 bytes NOP
    
    return new_entries

def write_mif(output_path, header, entries):
    """Write MIF file with new content."""
    with open(output_path, 'w') as f:
        f.write(header)
        f.write('\n')
        
        # Write entries in order
        max_addr = max(entries.keys()) if entries else 0
        
        for addr in range(max_addr + 1):
            if addr in entries:
                f.write(f'\t{addr:x}   :   {entries[addr]:02x};\n')
        
        f.write('END;\n')

def main():
    if len(sys.argv) != 3:
        print(f"Usage: {sys.argv[0]} <input.mif> <output.mif>")
        sys.exit(1)
    
    input_path = sys.argv[1]
    output_path = sys.argv[2]
    
    print(f"Processing {input_path}...")
    
    header, entries = parse_mif(input_path)
    print(f"  Original: {len(entries)} bytes, max address: {max(entries.keys()):x}")
    
    new_entries = insert_nops(entries)
    print(f"  After NOP insertion: {len(new_entries)} bytes, max address: {max(new_entries.keys()):x}")
    
    write_mif(output_path, header, new_entries)
    print(f"  Output written to {output_path}")

if __name__ == '__main__':
    main()
