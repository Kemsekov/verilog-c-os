/* Linker script for simple test program */
/* Load at address 0x80000000 (kernel memory region) */

MEMORY
{
    RAM (rwx) : ORIGIN = 0x80000000, LENGTH = 64K
}

SECTIONS
{
    .text : {
        *(.text.entry)
        *(.text)
        *(.text.*)
    } > RAM

    .rodata : {
        *(.rodata)
        *(.rodata.*)
    } > RAM

    .data : {
        *(.data)
        *(.data.*)
    } > RAM

    _bss_start = .;
    .bss : {
        *(.bss)
        *(.bss.*)
        *(COMMON)
    } > RAM
    _bss_end = .;

    /DISCARD/ : {
        *(.eh_frame)
        *(.eh_frame_header)
    }
}
