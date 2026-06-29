# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VysyxSoCFull.mk

default: VysyxSoCFull

### Constants...
# Perl executable (from $PERL, defaults to 'perl' if not set)
PERL = perl
# Python3 executable (from $PYTHON3, defaults to 'python3' if not set)
PYTHON3 = python3
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VysyxSoCFull
# Module prefix (from --prefix)
VM_MODPREFIX = VysyxSoCFull
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	 -g -O0  -I/home/frank_wu/ysyx-workbench/npc/csrc -I/home/frank_wu/ysyx-workbench/npc/tools/capstone/repo/include -I/home/frank_wu/ysyx-workbench/nvboard/usr/include \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	/home/frank_wu/ysyx-workbench/nvboard/build/nvboard.a \
	-lSDL2 \
	-lSDL2_image \
	-lSDL2_ttf \
	-lreadline \
	-lhistory \
	-ldl \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	auto_bind \
	cpu_exe \
	dut \
	init \
	sdb \
	main \
	mem \
	disasm \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	.. \
	../csrc \
	../csrc/cpu \
	../csrc/difftest \
	../csrc/init \
	../csrc/mem \
	../csrc/utils \


### Default rules...
# Include list of all generated classes
include VysyxSoCFull_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

auto_bind.o: /home/frank_wu/ysyx-workbench/npc/csrc/auto_bind.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
cpu_exe.o: /home/frank_wu/ysyx-workbench/npc/csrc/cpu/cpu_exe.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
dut.o: /home/frank_wu/ysyx-workbench/npc/csrc/difftest/dut.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
init.o: /home/frank_wu/ysyx-workbench/npc/csrc/init/init.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
sdb.o: /home/frank_wu/ysyx-workbench/npc/csrc/init/sdb.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
main.o: /home/frank_wu/ysyx-workbench/npc/csrc/main.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
mem.o: /home/frank_wu/ysyx-workbench/npc/csrc/mem/mem.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
disasm.o: /home/frank_wu/ysyx-workbench/npc/csrc/utils/disasm.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<

### Link rules... (from --exe)
VysyxSoCFull: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
