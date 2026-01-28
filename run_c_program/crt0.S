# RISC-V Startup Code (crt0) for Virtual Device
# Initializes stack pointer and calls main()

.section .text.startup
.global _start
.global main

_start:
    # Initialize stack pointer to top of available memory (64KB = 0x10000)
    # Using 0x0000FFFF as stack pointer (top of 64KB memory space)
    li sp, 0x0000F000  # Set stack pointer to near top of memory
    
    # Clear the frame pointer
    addi fp, x0, 0
    
    # Call main function
    call main
    
    # If main returns, go into infinite loop
hang:
    j hang

# Weak alias for main in case it's not defined
.weak main
main:
    # Default main if none provided - just return 0
    addi a0, x0, 0
    ret