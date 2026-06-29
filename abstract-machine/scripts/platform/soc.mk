AM_SRCS := riscv/ysyxsoc/start.S \
           riscv/ysyxsoc/trm.c \
		   riscv/ysyxsoc/ioe.c \
		   riscv/ysyxsoc/uart.c \
		   riscv/ysyxsoc/vme.c \
		   riscv/ysyxsoc/mpe.c \
		   riscv/ysyxsoc/timer.c \
		   riscv/ysyxsoc/gpu.c \
		   riscv/ysyxsoc/input.c \
		   riscv/ysyxsoc/cte.c \
		   riscv/ysyxsoc/trap.S
           

CFLAGS    += -fdata-sections -ffunction-sections
LDSCRIPTS += $(AM_HOME)/am/src/riscv/ysyxsoc/linker.ld
LDFLAGS   += --defsym=_mrom_start=0x20000000 --defsym=_entry_offset=0x0 --defsym=_sram_start=0x0f000000 --defsym=_sram_end=0x0f001fff
LDFLAGS   += --gc-sections -e _start

MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = the_insert-arg_rule_in_Makefile_will_insert_mainargs_here
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=$(MAINARGS_PLACEHOLDER) -msmall-data-limit=0

insert-arg: image
	@python3 $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) $(MAINARGS_PLACEHOLDER) "$(mainargs)"

image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: insert-arg
# 	echo "TODO: add command here to run simulation"
	$(MAKE) -C $(NPC_HOME) IMG=$(IMAGE).bin run

.PHONY: insert-arg
