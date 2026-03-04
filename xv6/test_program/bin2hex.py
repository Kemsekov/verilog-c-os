#!/usr/bin/env python3
"""Convert binary file to hex format (one byte per line)"""

import sys

def bin2hex(input_file, output_file):
    with open(input_file, 'rb') as f:
        data = f.read()
    
    with open(output_file, 'w') as f:
        for byte in data:
            f.write(f"{byte:02x}\n")
    
    print(f"Converted {len(data)} bytes to {output_file}")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python3 bin2hex.py <input.bin> <output.hex>")
        sys.exit(1)
    
    bin2hex(sys.argv[1], sys.argv[2])
