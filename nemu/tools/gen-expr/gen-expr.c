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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

void  gen_num(){
  char buff[16];
  snprintf(buff,sizeof(buff),"%d",rand()%100);
  strcat(buf,buff);
}

void gen(char arg){
  size_t len = strlen(buf);
  buf[len]   = arg;   // 直接写入字符
  buf[len+1] = '\0';  // 手动补 0
}

void gen_rand_op(){
  int i = rand()%4;
  char j;
  switch (i)
  {
  case 0:
    j = '+';
    gen(j);
    break;

  case 1:
    j = '-';
    gen(j);
    break;
  
    case 2:
    j = '*';
    gen(j);
    break;

  case 3:
    j = '/';
    gen(j);
    break;

  default:
    break;
  }
}


static void gen_rand_expr(int depth) {
  

  if(depth>5)
  {
    gen_num();
    return;
  }
  int i = rand()%3;
  switch(i){
    case 0:
      gen_num(); break;

    case 1: 
      gen('('); gen_rand_expr(depth+1); gen(')'); break;

    default: 
      gen_rand_expr(depth+1); gen_rand_op(); gen_rand_expr(depth+1); break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    buf[0] = '\0';
    gen_rand_expr(0);

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
