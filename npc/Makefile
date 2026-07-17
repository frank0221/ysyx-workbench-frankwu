IMG ?= /home/frank_wu/ysyx-workbench/npc/soc-tests/char-test.bin
INC_PATH ?=
include filelist.mk

NXDC_FILES = ./top.nxdc
include $(NVBOARD_HOME)/scripts/nvboard.mk

SRC_AUTO_BIND = $(abspath ./csrc/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

#CSRC = $(shell find $(NVBOARD_HOME)/src -name "*.cpp")
CSRC += $(SRC_AUTO_BIND)
CSRC += $(shell find $(NPC_HOME)/csrc -name "*.c" -o -name "*.cpp" | grep -v "capstone" | grep -v "device/*")
VSRC = $(shell find $(NPC_HOME)/vsrc -name "*.v")
VSRC += $(shell find $(NPC_HOME)/vsrc -name "*.sv")
VSRC += $(shell find $(YSYX_HOME)/ysyxSoC/perip -name "*.v")
VSRC += $(YSYX_HOME)/ysyxSoC/build/ysyxSoCFull.v
DIRS  = $(NPC_HOME)/csrc $(NPC_HOME)/tools/capstone/repo/include
INC  = $(YSYX_HOME)/ysyxSoC/perip/uart16550/rtl $(YSYX_HOME)/ysyxSoC/perip/spi/rtl
ASAN_LIB := $(shell gcc -print-file-name=libasan.so)

LDFLAGS += -lreadline -lhistory -ldl
run:$(SRC_AUTO_BIND) $(NVBOARD_ARCHIVE)
	@echo "Write this Makefile by your self."
	mkdir -p obj_dir
	verilator --cc --exe --public --build --autoflush --timescale "1ns/1ns" --no-timing --trace -j 0 $^ $(addprefix -LDFLAGS ,$(LDFLAGS)) --CFLAGS " -g -O0  $(addprefix -I,$(DIRS)) $(addprefix -I, $(INC_PATH))" \
	-I$(YSYX_HOME)/ysyxSoC/perip/uart16550/rtl -I$(YSYX_HOME)/ysyxSoC/perip/spi/rtl \
	--top-module ysyxSoCFull \
			$(VSRC) $(CSRC) 
#           vsrc/top.v \
#           vsrc/ysyx_25080218_EXU.v \
#           vsrc/ysyx_25080218_WBU.v \
#           vsrc/ysyx_25080218_IDU.v \
#           vsrc/ysyx_25080218_IFU.v \
# 		  vsrc/ysyx_25080218_MAU.v \
#           vsrc/MUX.v \
#           vsrc/example.v \
#           csrc/main.cpp \
# 		  csrc/init/init.c \
# 		  csrc/mem/mem.c \
# 		  csrc/cpu/cpu_exe.c \
# 		  csrc/init/sdb.c \
# 		  csrc/utils/disasm.c \
# 		  csrc/difftest/dut.c \
# 		  csrc/device/serial.c
	LD_PRELOAD=$(ASAN_LIB) obj_dir/VysyxSoCFull $(IMG) -b 
#-w
# -d /home/frank_wu/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so -w

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --exe --build --trace -j 0 -Wall sim_main.cpp top.v	

clean:
	rm -rf obj_dir dump.vcd

dump.fst:dump.vcd
	vcd2fst $< $@

#wave:dump.fst
wave:
	gtkwave -g dump.vcd wave/sdram.gtkw
#sdram.gtkw
#gpio.gtkw
#sdram.gtkw

.PHONY: all sim clean wave
include ../Makefile
