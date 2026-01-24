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

#include <isa.h>
vaddr_t mepc;
uint32_t mstatus = 0x1800;
uint32_t mcause;
uint32_t mtvec;



word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  mepc = epc;
  mcause = NO;
  printf("ecall reached. Mtvec: 0x%8x. Mstatus: 0x%8x. Mcause: 0x%8x. PC at 0x%8x\n",mtvec,mstatus,mcause,epc);
  return mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
