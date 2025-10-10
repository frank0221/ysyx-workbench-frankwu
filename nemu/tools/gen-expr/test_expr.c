#include "common.h"
int32_t expr(char *e, bool *success);

void test_expr(){
  FILE *fp = fopen("/home/frank_wu/ysyx-workbench/nemu/tools/gen-expr/input","r");
  assert(fp != NULL);

  char line[60000];
  int total=0,pass=0;
  while(fgets(line,sizeof(line),fp))
  {
    line[strlen(line)-1]='\0';
    char *correct;
    correct = strtok(line," ");

    int i = atoi(correct);
    char *arg = strtok(NULL," ");

    // unsigned expect;
    // char expr[sizeof(line)];
    // if (sscanf(line, "%u %65535[^\n]", &expect, expr) != 2) continue;
    int j;
    bool a;
    j = expr(arg, &a);
    ++total;
    if(i == j && a){
      printf("pass");
      pass++;
    }
    else
      printf("failed");
  }
  printf("passed %d total %d",pass,total);
  fclose(fp);
  return 0;
}