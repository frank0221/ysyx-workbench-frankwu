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

#include "sdb.h"
//#include <commen.h>
#define NR_WP 32



static WP wp_pool[NR_WP] = {};
WP *head = NULL, *free_ = NULL;

WP* new_wp();
void free_wp(WP *wp);

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(){
  WP* temp;
  if(free_){
    temp = free_;
    free_ = free_->next;
    if(head==NULL){
      head = temp;
      head->next = NULL;
    }
    else{
      temp->next = head;
      head = temp;
      
    }
  }
  else assert(0);
  return temp;
}

void free_wp(WP *wp){
  wp->next = free_;
  free_ = wp;
}


int watchpoint_update(){
  WP* wp = NULL;
  for(wp = head; wp; wp = wp->next){
    bool ok;
    uint32_t new_value = expr(wp->expr,&ok);
    if(new_value != wp->old_value){
      nemu_state.state = NEMU_STOP;
      printf("watchpoint change\n NUM:%d old_value:%d new_value:%d\n",wp->NO,wp->old_value,new_value);
    }
  }
  return 0;
}
