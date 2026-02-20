# Makefile for simple test program

RISCV_TOOLCHAIN = /home/vlad/Programs/riscv2/RISCVerilog/verilog-c-os/riscv_lib/bin/riscv32-unknown-elf-
CC = $(RISCV_TOOLCHAIN)gcc
OBJCOPY = $(RISCV_TOOLCHAIN)objcopy
OBJDUMP = $(RISCV_TOOLCHAIN)objdump

CFLAGS = -march=rv32ima_zicsr -mabi=ilp32 -Os -fno-builtin -fno-builtin-function -nostdlib -nostartfiles -ffreestanding -Wall
LDFLAGS = -nostdlib -nostartfiles -T linker.ld

# Output files
ELF = simple_test.elf
BIN = simple_test.bin
HEX = simple_test.hex
DISASM = simple_test.disasm
MIF = simple_test.mif

all: $(ELF) $(DISASM) $(HEX) $(MIF)

$(ELF): simple_test.c startup.S linker.ld
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ startup.S simple_test.c

$(BIN): $(ELF)
	$(OBJCOPY) -O binary $< $@

$(DISASM): $(ELF)
	$(OBJDUMP) -d $< > $@

$(HEX): $(BIN)
	python3 bin2hex.py $< $@

$(MIF): $(HEX)
	python3 hex2mif.py $< $@

clean:
	rm -f $(ELF) $(BIN) $(HEX) $(DISASM) $(MIF) *.o

.PHONY: all clean
