#ifndef __INIT_H_
#define __INIT_H_

#include "common.h"
void init_device(int argc, char *argv[]);
void cmd_process();
int cmd_q(char *args);
int cmd_c(char *args);
int cmd_si(char *args);
int cmd_x(char *args);
int cmd_info(char *args);
void isa_reg_display();
#endif
