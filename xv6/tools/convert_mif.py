#!/usr/bin/env python3
"""
Script to convert MIF (Memory Initialization File) to a format suitable for Verilog $readmemh
"""

import sys
import re

def convert_mif_to_hex(mif_file, hex_file):
    """Convert MIF file to raw hex format"""
    with open(mif_file, 'r') as f:
        content = f.read()
    
    # Parse the MIF file
    lines = content.split('\n')
    
    # Find DEPTH and WIDTH to validate
    depth_match = re.search(r'DEPTH\s*=\s*(\d+)', content)
    width_match = re.search(r'WIDTH\s*=\s*(\d+)', content)
    
    if not depth_match or not width_match:
        raise ValueError("Could not find DEPTH or WIDTH in MIF file")
    
    depth = int(depth_match.group(1))
    width = int(width_match.group(1))
    
    print(f"MIF file info: DEPTH={depth}, WIDTH={width}")
    
    # Extract content between CONTENT BEGIN and END
    content_started = False
    hex_values = {}
    
    for line in lines:
        line = line.strip()
        
        if 'CONTENT BEGIN' in line.upper():
            content_started = True
            continue
        
        if content_started:
            if 'END;' in line.upper():
                break
                
            # Match format like: address : value;
            match = re.match(r'\s*([0-9a-fA-F]+)\s*:\s*([0-9a-fA-F]+)\s*;', line)
            if match:
                addr = int(match.group(1), 16)
                val = match.group(2)
                hex_values[addr] = val
    
    # Write to hex file
    with open(hex_file, 'w') as f:
        # Write all addresses up to depth
        for addr in range(depth):
            if addr in hex_values:
                f.write(f"{hex_values[addr]}\n")
            else:
                # Write zero padding
                if width == 8:
                    f.write("00\n")
                elif width == 16:
                    f.write("0000\n")
                elif width == 32:
                    f.write("00000000\n")
                else:
                    # Default to 8-bit zeros
                    f.write("00\n")
    
    print(f"Converted {len(hex_values)} memory locations to {hex_file}")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python3 convert_mif.py <input.mif> <output.hex>")
        sys.exit(1)
    
    input_file = sys.argv[1]
    output_file = sys.argv[2]
    
    convert_mif_to_hex(input_file, output_file)