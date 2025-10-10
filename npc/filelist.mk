ifeq ($(CONFIG_ITRACE)$(CONFIG_IQUEUE),)
SRCS-BLACKLIST-y += csrc/utils/disasm.c
else
LIBCAPSTONE = tools/capstone/repo/libcapstone.so.5
CFLAGS += -I tools/capstone/repo/include
csrc/utils/disasm.c: $(LIBCAPSTONE)
$(LIBCAPSTONE):
	$(MAKE) -C csrc/tools/capstone
endif