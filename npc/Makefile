IMG ?= /home/frank_wu/ysyx-workbench/am-kernels/tests/cpu-tests/build/string-riscv32e-npc.bin
include filelist.mk
run:
	@echo "Write this Makefile by your self."
	$(shell mkdir -p obj_dir)
	verilator --cc --exe --build --trace -j 0 --LDFLAGS "-lreadline -lhistory -ldl" --CFLAGS "-I$(PWD)/csrc -g -O0  -I$(PWD)/tools/capstone/repo/include" --top-module top \
          vsrc/top.v \
          vsrc/ysyx_25080218_EXU.v \
          vsrc/ysyx_25080218_WBU.v \
          vsrc/ysyx_25080218_IDU.v \
          vsrc/ysyx_25080218_IFU.v \
          vsrc/MUX.v \
          vsrc/example.v \
          csrc/main.cpp \
		  csrc/init/init.c \
		  csrc/mem/mem.c \
		  csrc/cpu/cpu_exe.c \
		  csrc/init/sdb.c \
		  csrc/utils/disasm.c 
	obj_dir/Vtop $(IMG) -b

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --exe --build --trace -j 0 -Wall sim_main.cpp top.v	

clean:
	rm -rf obj_dir dump.vcd

wave:
	gtkwave dump.vcd

.PHONY: all sim clean wave
include ../Makefile
