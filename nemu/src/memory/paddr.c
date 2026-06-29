/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>
#define SOC_EN 1
#ifndef SOC_EN
#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  #ifdef CONFIG_MTRACE_COND 
    printf("\033[0m\033[1;31mMemory read at\033[0m \033[0m\033[1;34m0x%x\033[0m\n",addr);
  #endif
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  #ifdef CONFIG_MTRACE_COND
    printf("Memory write at 0x%x\n",addr);
  #endif
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
  IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
#endif
#ifdef SOC_EN
static uint8_t *mrom = NULL;
static uint8_t *sram = NULL;
uint8_t* guest_to_host(paddr_t paddr) { return mrom + paddr - 0x20000000; }

void init_mem() {
  mrom = malloc(0x1000);
  assert(mrom);
  sram = malloc(8*1024);
  assert(sram);
}

word_t paddr_read(paddr_t addr, int len) {
  #ifdef CONFIG_MTRACE_COND 
    printf("\033[0m\033[1;31mMemory read at\033[0m \033[0m\033[1;34m0x%x\033[0m\n",addr);
  #endif
  if(addr >= 0x20000000 && addr <= 0x20000fff){
    word_t ret = host_read(mrom+addr-0x20000000, len);
    return ret;
  }
  else if(addr >= 0x0f000000 && addr <= 0x0f002000){
    word_t ret = host_read(sram+addr-0x0f000000, len);
    return ret;
  }
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  #ifdef CONFIG_MTRACE_COND
    printf("Memory write at 0x%x\n",addr);
  #endif
  if(addr >= 0x20000000 && addr <= 0x20000fff){
    assert(0);
  }
  else if(addr >= 0x0f000000 && addr <= 0x0f002000){
    host_write(sram+addr-0x0f000000, len, data);
  }
}

#endif
