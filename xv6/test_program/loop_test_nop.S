# Test program with NOPs after loads to avoid hazards
# This is a compiler/assembler-level hack

.section .text.entry
.globl _start

_start:
    # === INITIAL OPERATIONS ===
    lui x1, 0x11111
    addi x1, x1, 0x111
    lui x2, 0x22222
    addi x2, x2, 0x222
    add x3, x1, x2
    lui x4, 0x60000
    sw x3, 0(x4)
    xor x5, x1, x2
    sw x5, 4(x4)
    and x6, x1, x2
    sw x6, 8(x4)
    or x7, x1, x2
    sw x7, 12(x4)
    
    # === LOOP WITH LOAD (now with NOP hack) ===
    li x8, 0
    
loop:
    lw x8, 16(x4)     # Load counter
    nop               # HACK: Stall cycle for load to complete!
    nop               # Second NOP for safety
    addi x8, x8, 1    # Now x8 is ready!
    
    sw x8, 16(x4)
    nop
    nop
    
    slli x9, x8, 4
    add x9, x9, x8
    sw x9, 20(x4)
    nop
    nop
    
    li x10, 0xFFFFFFFF
    xor x11, x8, x10
    sw x11, 24(x4)
    nop
    nop
    
    j loop
    nop
    nop
