#!/usr/bin/env python3
"""Convert hex file to MIF format"""

import sys

def hex2mif(input_file, output_file):
    with open(input_file, 'r') as f:
        lines = f.readlines()
    
    with open(output_file, 'w') as f:
        f.write("WIDTH=8;\n")
        f.write(f"DEPTH={len(lines)};\n\n")
        f.write("ADDRESS_RADIX=HEX;\n")
        f.write("DATA_RADIX=HEX;\n\n")
        f.write("CONTENT BEGIN\n")
        
        for addr, line in enumerate(lines):
            data = line.strip()
            f.write(f"\t{addr:x}   :   {data};\n")
        
        f.write("END;\n")
    
    print(f"Converted {len(lines)} bytes to MIF format")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python3 hex2mif.py <input.hex> <output.mif>")
        sys.exit(1)
    
    hex2mif(sys.argv[1], sys.argv[2])
