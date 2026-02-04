/*
 * Startup code for RISC-V programs
 * Based on the memory layout expected by the RISC-V core
 */

.section .text.boot
.global boot_vector
.global main

/* Boot vector - first thing executed by the processor */
boot_vector:
    /* Jump to the start of the actual program */
    j _start
    /* Pad with unimp to ensure next instruction is at expected location */
    unimp

.section .text.startup
.global _start

_start:
    /* Initialize all registers to zero */
    addi x0, x0, 0     /* x0 is always zero */
    addi x1, x0, 0
    addi x2, x0, 0
    addi x3, x0, 0
    addi x4, x0, 0
    addi x5, x0, 0
    addi x6, x0, 0
    addi x7, x0, 0
    addi x8, x0, 0
    addi x9, x0, 0
    addi x10, x0, 0
    addi x11, x0, 0
    addi x12, x0, 0
    addi x13, x0, 0
    addi x14, x0, 0
    addi x15, x0, 0
    addi x16, x0, 0
    addi x17, x0, 0
    addi x18, x0, 0
    addi x19, x0, 0
    addi x20, x0, 0
    addi x21, x0, 0
    addi x22, x0, 0
    addi x23, x0, 0
    addi x24, x0, 0
    addi x25, x0, 0
    addi x26, x0, 0
    addi x27, x0, 0
    addi x28, x0, 0
    addi x29, x0, 0
    addi x30, x0, 0
    addi x31, x0, 0

    /* Initialize stack pointer */
    /* Use a safe location in memory for stack - start from high memory and go down */
    lui sp, 0x4      /* Load upper part of address (0x4000) */
    addi sp, sp, 0   /* Point to 0x4000 as stack top, well above program sections */

    /* Set up trap vector to a simple handler that just returns */
    la t0, simple_trap_handler
    csrw mtvec, t0     /* Set machine trap vector */

    /* Clear CSR registers that might cause issues */
    csrw mstatus, x0
    csrw mie, x0
    csrw mip, x0

    /* Call main function */
    call main

    /* Exit simulation using the CSR mechanism */
    /* The exit code is returned in a0 register */
    li t0, 0x00000000  /* CSR_SIM_CTRL_EXIT = 0 << 24 */
    or t0, t0, a0      /* OR with exit code */
    csrw dscratch, t0  /* Write to dscratch CSR to trigger exit */

    /* Infinite loop */
_exit_loop:
    j _exit_loop

/* Simple trap handler that just returns */
simple_trap_handler:
    /* For now, just return to skip any exceptions */
    mret