# Minimal test program - no branches, just arithmetic and store
# Assembles to:
# 0x80000000: LUI x1, 0x12345      (load upper immediate)
# 0x80000004: ADDI x1, x1, 0x678   (x1 = 0x12345678)
# 0x80000008: SW x1, 0(x2)         (store to address in x2, which is 0x60000000)
# 0x8000000c: NOP
# 0x80000010: J -8                 (infinite loop back to 0x8000000c)

.section .text.entry
.globl _start

_start:
    # Load 0x12345678 into x1
    lui x1, 0x12345
    addi x1, x1, 0x678
    
    # Set x2 to 0x60000000 (test output address)
    lui x2, 0x60000
    
    # Store x1 to 0x60000000
    sw x1, 0(x2)
    
    # Infinite loop
loop:
    nop
    j loop
