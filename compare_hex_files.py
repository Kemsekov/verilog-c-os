#!/usr/bin/env python3

# Compare two hex files to see if they are different
with open('/tmp/first_run.hex', 'r') as f:
    first_content = f.read()

with open('/tmp/second_run.hex', 'r') as f:
    second_content = f.read()

print("First hex file content:")
print(first_content)
print("\nSecond hex file content:")
print(second_content)

if first_content == second_content:
    print("\nFILES ARE IDENTICAL - The C program changes did NOT affect the output")
else:
    print("\nFILES ARE DIFFERENT - The C program changes DID affect the output")
    
    # Show differences line by line
    first_lines = first_content.split('\n')
    second_lines = second_content.split('\n')
    
    print("\nLine-by-line differences:")
    for i, (line1, line2) in enumerate(zip(first_lines, second_lines)):
        if line1 != line2:
            print(f"Line {i}:")
            print(f"  First:  {line1}")
            print(f"  Second: {line2}")
    
    # If one file has more lines than the other
    if len(first_lines) != len(second_lines):
        print(f"\nFiles have different lengths:")
        print(f"  First:  {len(first_lines)} lines")
        print(f"  Second: {len(second_lines)} lines")
        if len(first_lines) > len(second_lines):
            for i in range(len(second_lines), len(first_lines)):
                print(f"  Extra line {i} in first: {first_lines[i]}")
        else:
            for i in range(len(first_lines), len(second_lines)):
                print(f"  Extra line {i} in second: {second_lines[i]}")