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
#include <string.h>
#include <isa.h>
#include <assert.h>
#include <memory/paddr.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <assert.h>
enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUM, TK_HEX,TK_NEQ, TK_AND, DEREF, NEG, REG

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"-",'-'},            //minus
  {"\\*",'*'},          //multi
  {"\\/",'/'},
  {"\\(",'('},
  {"\\)",')'},
  {"0[xX][0-9A-Fa-f]+",TK_HEX},
  {"[0-9]+",TK_NUM},
  {"!=",TK_NEQ},
  {"&&",TK_AND},
  {"\\$\\w+",REG}
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[6000] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        
        switch (rules[i].token_type) {
          case '+':
              tokens[nr_token].type = '+';
              nr_token++;
              break;
          case '-':
              tokens[nr_token].type = '-';
              nr_token++;
              break;
          case '*':
              tokens[nr_token].type = '*';
              nr_token++;
              break;
          case '/':
              tokens[nr_token].type = '/';
              nr_token++;
              break;
          case '(':
              tokens[nr_token].type = '(';
              nr_token++;
              break;
          case ')':
              tokens[nr_token].type = ')';
              nr_token++;
              break;
          case TK_NOTYPE:
              break;
          case TK_EQ:
              tokens[nr_token].type = TK_EQ;
              nr_token++;
              break;
          case TK_HEX:
              tokens[nr_token].type = TK_HEX;
              strncpy(tokens[nr_token].str,substr_start,substr_len);
              tokens[nr_token].str[substr_len] = '\0';
              nr_token++;
              break;
          case REG:
              tokens[nr_token].type = REG;
              printf("REG\n");
              strncpy(tokens[nr_token].str,substr_start+1,substr_len-1);
              tokens[nr_token].str[substr_len-1] = '\0';
              printf("%s\n",tokens[nr_token].str);
              nr_token++;
              break;
          case TK_NUM:
              tokens[nr_token].type = TK_NUM;
              strncpy(tokens[nr_token].str,substr_start,substr_len);
              tokens[nr_token].str[substr_len] = '\0';
              nr_token++;
              break;
          case TK_NEQ:
              tokens[nr_token].type = TK_NEQ;
              nr_token++;
              break;
          case TK_AND:
              tokens[nr_token].type = TK_AND;
              nr_token++;
              break;
          default: TODO();
        }
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  for (int i = 0; i < nr_token; i ++) {
  if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == '(' || tokens[i - 1].type == '+' || tokens[i - 1].type == '-'
  || tokens[i - 1].type == '*' || tokens[i - 1].type == '/' || tokens[i - 1].type == TK_AND || tokens[i - 1].type == TK_EQ || tokens[i - 1].type == TK_NEQ ) ) {
    tokens[i].type = DEREF;
    }
  }
  for (i = 0; i < nr_token; i ++) {
  if (tokens[i].type == '-' && (i == 0 || tokens[i - 1].type == '(' || tokens[i - 1].type == '+' || tokens[i - 1].type == '-'
  || tokens[i - 1].type == '*' || tokens[i - 1].type == '/' || tokens[i - 1].type == TK_AND || tokens[i - 1].type == TK_EQ || tokens[i - 1].type == TK_NEQ ) ) {
     tokens[i].type = NEG;
    }
  }
  return true;
}

bool check_parentheses(int p,int q){
  if(tokens[p].type != '(' || tokens[q].type!= ')')
    return false;

  int match=0;
  for(int i = p; i<=q; i++){
    if(tokens[i].type == '(') match++;
    if(tokens[i].type == ')') match--;
    if(match < 0) return false;
    if(match==0 && i<q) return false;
  }
  if(match != 0) 
    return false;
  else 
    return true;
}
 
u_int32_t find_op(int p,int q){
  int match = 0;
  int32_t priority1 = -1;
  int32_t priority2 = -1;
  int32_t priority3 = -1;
  int32_t priority4 = -1;
  //int32_t priority5 = -1;
  for(int i = p; i<=q; i++){
    if(tokens[i].type == '(') match++;
    if(tokens[i].type == ')') match--;

    if(match ==0 )
    {
      switch (tokens[i].type)
      {
        case '+':
        case '-':
          priority1 = i;
          break;

        case '*':
        case '/':
          priority2 = i;
          break;
        case TK_AND:
          priority3 = i;
          break;
        case TK_EQ:
        case TK_NEQ:
          priority4 = i;
          break;
        // case DEREF:
        //   priority5 = i;
        default:
          break;
      }
    }
  }
  return priority3 >=0 ? priority3 :
         priority4 >=0 ? priority4 :
         priority1 >=0 ? priority1 : priority2;
}

int32_t eval(int p, int q){
  if(p > q){
    assert(p <= q);
  }
  else if (p == q){
   // assert(tokens[p].type == TK_NUM || tokens[p].type == TK_HEX);
   if(tokens[p].type == REG){
        bool ok;
        printf("%s\n",tokens[p].str);
        printf("REG_PROCESS\n");
        uint32_t reg_value= isa_reg_str2val(tokens[p].str, &ok);
        assert(ok == true);
        return reg_value;
      }
    else 
      return strtoul(tokens[p].str,NULL,0); //automatically judge the dec or hex
  }
  else if (check_parentheses(p,q) == true){

    return eval(p+1, q-1);
  }
  else{
    int32_t op = find_op(p,q);
    if(op>0)
    {
      int32_t val1 = eval(p,op-1);
      int32_t val2 = eval(op+1,q);

      int op_type = tokens[op].type;
      switch(op_type){
        case '+':     return val1+val2;
        case '-':     return val1-val2;
        case '*':     return val1*val2;
        case '/':     return val1/val2;
        case TK_AND:  return val1 && val2;
        case TK_EQ:   return val1 == val2;
        case TK_NEQ:  return val1 != val2;
        //case DEREF:   return paddr_read(eval(p+1,q), 4);
        default : assert(0);
      }
    }
    if(op == -1)
    {
      printf("%d %d\n",p,q);
      printf("REG_PROCESS\n");
      if(tokens[p].type == DEREF){
        return  paddr_read(eval(p+1,q), 4);
      }
      else if(tokens[p].type == NEG){
        return -eval(p+1,q);
      }
      else if(tokens[p].type == REG){
        bool ok;
        printf("%s",tokens[p].str);
        uint32_t reg_value= isa_reg_str2val(tokens[p].str, &ok);
        assert(ok == true);
        return reg_value;
      }
      assert(0);
    }
  }
  
  
  return 0;
}

int32_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  int32_t result;
  result = eval(0,nr_token-1);
  //printf("%d",result);
  //TODO();
  *success =true;
  return result;
}

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
      printf("pass! expected:%d got:%d\n",i,j);
      pass++;
    }
    else
      printf("failed");
  }
  printf("passed %d total %d\n",pass,total);
  fclose(fp);
}
