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
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <string.h>
#include <memory/paddr.h>
#include <utils.h>
static int is_batch_mode = false;
void test_expr(void);
void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args){
  char *arg = strtok(NULL," ");
  int i = atoi(arg);
  cpu_exec(i);
  return 0;
}

static int cmd_info(char *args){
  char *arg = strtok(NULL," ");
  if (strcmp(arg, "r") == 0) {
    isa_reg_display();
}
  else if(strcmp(arg, "w") == 0)
  {
    WP* wp;
    for(wp = head; wp; wp = wp->next){
      printf("NUM:%d ADDRESS:%s\n",wp->NO,wp->expr);
    }
  }
  return 0;
}

static int cmd_x(char *args){
  char *arg = strtok(NULL," ");
  int i = atoi(arg);
  // char *addr = strtok(NULL," ");
  // uint32_t add = strtoul(addr, NULL, 16);;
  // for(int j=0;j<i;j++)
  // {
  //   printf("0x%X :%d\n",add,paddr_read(add, 4));
  //   add = add + 0x4;
  // }
  char *exp = strtok(NULL,"");
  bool ok;
  uint32_t result = expr(exp, &ok);
  assert(ok==true);

  // char *addr;
  // sprintf(addr,"%d",result);
  // result = strtoul(addr,NULL,16);
  uint32_t add = result;
  for(int j=0;j<i;j++)
  {
    printf("0x%X :%d\n",add,paddr_read(add, 4));
    add = add + 0x4;
  }
  return 0;
}

static int cmd_p(char *args){
  //char *arg = strtok(NULL," ");
  //int n = atoi(arg);

  char *exp = strtok(NULL,"");
  bool ok;
  int result = expr(exp, &ok);
  assert(ok==true);
  printf("expr(dec) = %d\n",result);
  printf("expr(hex) = 0x%x\n",result);
  // uint32_t add = result;
  // for(int j=0;j<n;j++)
  // {
  //   printf("0x%X :%d\n",add,paddr_read(add, 4));
  //   add = add + 0x4;
  // }
  return 0;

}

static int cmd_w(char *args){
  char *watchpoint = strtok(NULL,"");
  WP* wh =new_wp();
  strcpy(wh->expr,watchpoint);
  bool ok;
  wh->old_value = expr(wh->expr,&ok);
  assert(ok==true);
  printf("expr = %s old_value = %d\n",wh->expr,wh->old_value);
  return 0;
}

static int cmd_d(char *args){
  char *d_watchpoint = strtok(NULL," ");
  int d = atoi(d_watchpoint);
  WP* wp;
  WP* prev = NULL;
  for(wp = head; wp; wp = wp->next){
    if(wp->NO == d){
      break;
    }
    prev = wp;
  }
  if(!wp) printf("no match watchpoint\n");
  if(prev) prev->next = wp->next;
  else head = wp->next;

  free_wp(wp);
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si","Step through the program",cmd_si},
  { "info","Print reg status and watchpoint info",cmd_info},
  { "x","Scan the memory",cmd_x},
  { "p","Print the EXPR",cmd_p},
  { "w","Set watchpoint",cmd_w},
  { "d","Delete the watchpoint",cmd_d}
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();

  //test_expr();
}
