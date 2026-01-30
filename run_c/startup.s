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
    /* Initialize stack pointer */
    /* Use a safe location in memory for stack */
    lui sp, 0x10       /* Load upper part of address (0x10000) */
    addi sp, sp, 0     /* Adjust to actual stack pointer */

    /* Set up trap vector to a simple handler that just returns */
    la t0, simple_trap_handler
    csrw mtvec, t0     /* Set machine trap vector */

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