# RISCVerilog

![verilog](https://img.shields.io/badge/Verilog-RISC--V-blue.svg)
![license](https://img.shields.io/github/license/tomicmilos57/RISCVerilog)

## Overview

**RISCVerilog** project implements a RISC-V CPU on FPGA, based on the RV32IMA_Zicsr ISA with support for user, supervisor, and machine modes, as well as interrupt handling.
The system is fully capable of booting and running **XV6 OS** from an SD card with filesystem support, and it supports standard UART-based terminal I/O.

## DEMO


https://github.com/user-attachments/assets/0f996498-32ea-435e-90ad-518e42083fd4


## Hardware VS REMU VS QEMU




https://github.com/user-attachments/assets/bf889b0f-d9ca-4ed2-8a5a-4b2966a812b7




CPU Architecture:
-----------------
- ISA: RV32IMA_Zicsr (32-bit, includes atomic instructions, CSR instructions, and full interrupt support)
- MMU: SV32 (32-bit virtual memory, 2-level page table)
- Privilege modes: Machine, Supervisor, User
- Interrupts: Handled through PLIC and CLINT
- Single core implementation

Memory Map:
-----------
- Fast internal memory:
  - Size: 48KB
  - Address: 0x80000000
  - Purpose: Stores the XV6 kernel image
- SDRAM (external):
  - Size: 4MB
  - Address: 0x8000c000
  - Accessed via a custom Verilog SDRAM controller
  - Purpose: Stores dynamic kernel and user memory (heap, stack, page tables)
- SD card:
  - Size: 1MB for fs.img
  - Address: 0x10001000
  - Connected via custom SD card SPI controller
  - Purpose: Contains XV6 filesystem (fs.img)
- UART:
  - Size: Six registers
  - Address: 0x10000000
  - Purpose: Sends data via GPIO wires to Terminal
- PLIC:
  - Address: 0x0c000000
  - Purpose: Contains information about device interrupts

I/O Subsystems:
---------------
- UART:
  - Handled via a custom UART controller
  - 2 GPIO wires connected to Raspberry Pi Pico
  - Pico acts as UART-to-USB bridge for PC
  - PC receives console output using minicom or similar terminal
- PS/2 Keyboard (prototype only):
  - Originally used as input method
  - Replaced by UART for simplicity and reliability
- VGA (prototype only):
  - Originally used as output method
  - Also replaced by UART
- Debug Outputs:
  - HEX displays and LEDs connected to FPGA board
  - Used for visual debugging during synthesis or when UART is not operational
- Raspberry Pi Pico:
  - Serves as UART bridge
  - Additional GPIOs used in earlier data transfer/storage prototypes before SD card (now redundant)

System Boot Process:
--------------------
1. FPGA is flashed with CPU, memory controllers, and peripherals.
2. Fast internal memory is preloaded with the XV6 kernel at address 0x80000000.
3. On reset, CPU starts execution from the fast memory.
4. SV32 page tables are set up in SDRAM.
5. Filesystem accesses are performed via the SD card controller.
6. UART is used for console I/O.
7. PLIC is used to deliver interrupts from UART, SD, and other devices.
8. XV6 kernel handles interrupts and performs context switches as needed.

Emulator [REMU](https://github.com/tomicmilos57/remu):
----------------
- A full emulator was developed to fully mimic hardware.
- It was used to initially run XV6 in a controlled environment.
- The emulator was critical in debugging hardware by comparing emulator behavior with FPGA output.
- Allows cycle-by-cycle comparison of CPU state, memory, register file, and I/O events.
- Helped significantly in identifying logic bugs and design mismatches.

Development Strategy:
---------------------
1. REMU was developed first to validate the design and test XV6 compatibility.
2. XV6 kernel was modified to fit the custom memory map and device layout.
3. Once XV6 booted successfully in REMU, the same kernel image was used on FPGA hardware.
4. Debugging was performed by comparing REMU logs to hardware output.
5. LEDs, HEX displays, and UART output were used for tracing issues.
