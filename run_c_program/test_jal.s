.section .text.startup
.global _start

_start:
    # Infinite loop using JAL to self
    jal x0, 0  # Jump to current address (PC + 0) - should create infinite loop

hang:
    j hang     # Backup infinite loop if jal doesn't work