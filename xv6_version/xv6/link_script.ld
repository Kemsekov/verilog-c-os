/* Simple linker script for RISC-V programs */
ENTRY(boot_vector)

SECTIONS
{
    . = 0x00002000;

    .text.boot :
    {
        *(.text.boot)
    }

    .text :
    {
        *(.text.startup)
        *(.text)
        *(.text.*)
    }

    .rodata :
    {
        *(.rodata)
        *(.rodata.*)
    }

    .data :
    {
        *(.data)
        *(.data.*)
    }

    .bss :
    {
        *(.bss)
        *(.bss.*)
        *(COMMON)
    }

    PROVIDE(_end = .);
}