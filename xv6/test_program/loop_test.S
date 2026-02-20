# Test program with initial operations followed by infinite loop with operations
# This tests that the CPU correctly handles both straight-line code and loops

.section .text.entry
.globl _start

_start:
    # === INITIAL OPERATIONS (before loop) ===
    
    # 1. Load 0x11111111 into x1
    lui x1, 0x11111
    addi x1, x1, 0x111
    
    # 2. Load 0x22222222 into x2
    lui x2, 0x22222
    addi x2, x2, 0x222
    
    # 3. Add x1 + x2 -> x3 (should be 0x33333333)
    add x3, x1, x2
    
    # 4. Store x3 to 0x60000000 (test output)
    lui x4, 0x60000
    sw x3, 0(x4)
    
    # 5. XOR x1 ^ x2 -> x5 (should be 0x33333333)
    xor x5, x1, x2
    
    # 6. Store x5 to 0x60000004
    sw x5, 4(x4)
    
    # 7. AND x1 & x2 -> x6 (should be 0x00000000)
    and x6, x1, x2
    
    # 8. Store x6 to 0x60000008
    sw x6, 8(x4)
    
    # 9. OR x1 | x2 -> x7 (should be 0x33333333)
    or x7, x1, x2
    
    # 10. Store x7 to 0x6000000C
    sw x7, 12(x4)
    
    # === INFINITE LOOP WITH OPERATIONS ===
    
loop:
    # Loop iteration counter in x8 (starts at 0)
    # We'll increment and store each iteration
    
    # Load current counter value from 0x60000010
    lw x8, 16(x4)
    
    # Increment counter
    addi x8, x8, 1
    
    # Store counter back
    sw x8, 16(x4)
    
    # Calculate counter * 0x11111111 and store at 0x60000014
    # (simulated multiplication via shift and add)
    slli x9, x8, 4      # x9 = counter * 16
    add x9, x9, x8      # x9 = counter * 17
    
    sw x9, 20(x4)
    
    # XOR counter with 0xFFFFFFFF and store at 0x60000018
    li x10, 0xFFFFFFFF
    xor x11, x8, x10
    sw x11, 24(x4)
    
    # Jump back to loop start
    j loop
