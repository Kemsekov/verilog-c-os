# Startup assembly code for RISC-V

.section .text.entry
.globl _start

_start:
    # Set up stack pointer (use top of 64KB RAM region)
    li sp, 0x80010000
    
    # Clear BSS section
    la t0, _bss_start
    la t1, _bss_end
    li t2, 0
bss_clear:
    bge t0, t1, bss_clear_done
    sw t2, 0(t0)
    addi t0, t0, 4
    j bss_clear
bss_clear_done:

    # Jump to main
    call main
    
    # If main returns, loop forever
infinite_loop:
    nop
    j infinite_loop

# Exception vector (simple stub)
.section .text.trap
.globl trap_vector
trap_vector:
    # Just return from trap
    sret
