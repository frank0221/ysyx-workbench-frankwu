#ifndef __MEM_H_
#define __MEM_H_

#include "common.h"
#include <stdint.h>

uint8_t* guest_to_host(uint32_t paddr);
uint32_t pmem_read(uint32_t addr);
uint32_t host_read(void *addr, int len);
extern uint8_t pmem[1024*1024*1024];
extern "C" void flash_read(int32_t addr, int32_t *data);
extern "C" void mrom_read(int32_t addr, int32_t *data);

#endif