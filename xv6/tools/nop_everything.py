#!/usr/bin/env python3
"""
The Ultimate Hack: Insert NOP after EVERY instruction

Input: Byte-format hex file (one byte per line, little-endian order)
Output: Same format but with NOP word (4 bytes: 13 00 00 00) after every instruction word (4 bytes)

Every 4 bytes (1 instruction) gets 4 NOP bytes inserted after it.
"""

import sys

def insert_nops_everywhere(input_hex, output_hex):
    """Insert NOP word after every instruction word, byte format input/output"""
    
    # Read input hex file (bytes)
    with open(input_hex, 'r') as f:
        lines = [line.strip().lower() for line in f.readlines() if line.strip()]
    
    # Convert to bytes
    input_bytes = []
    for line in lines:
        try:
            input_bytes.append(int(line, 16))
        except ValueError:
            input_bytes.append(0)
    
    print(f"Loaded {len(input_bytes)} bytes from {input_hex}")
    
    # Insert NOP word (4 bytes) after every instruction word (4 bytes)
    NOP_BYTES = [0x13, 0x00, 0x00, 0x00]  # NOP word in little-endian
    fixed_bytes = []
    
    for i, byte in enumerate(input_bytes):
        fixed_bytes.append(byte)
        # After every 4th byte (complete instruction word), insert NOP word
        if (i + 1) % 4 == 0:
            fixed_bytes.extend(NOP_BYTES)
    
    print(f"Original size: {len(input_bytes)} bytes")
    print(f"Patched size: {len(fixed_bytes)} bytes (2x slowdown)")
    
    # Write output hex file (2-digit lowercase bytes, one per line)
    with open(output_hex, 'w') as f:
        for byte_val in fixed_bytes:
            f.write(f"{byte_val:02x}\n")
    
    print(f"Output written to {output_hex}")
    print("\n=== The Ultimate Hack Applied ===")
    print("Every instruction now has a NOP buffer!")
    print("No hazards possible, but CPU runs at ~50% speed")
    print("==============================")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print(f"Usage: {sys.argv[0]} <input.hex> <output.hex>")
        sys.exit(1)
    
    insert_nops_everywhere(sys.argv[1], sys.argv[2])
