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
#include <memory/paddr.h>
#include <elf.h>
void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm();
#ifdef CONFIG_FTRACE
void init_ftrace(char *elf_file);
void ftrace(int rd, int src1, vaddr_t dnpc, vaddr_t pc);
#endif
static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
  //Log("Exercise: Please remove me in the source code and compile NEMU again.");
//  assert(0);
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static char *elf_file = NULL;
static int difftest_port = 1234;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'e': elf_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);
  #ifdef CONFIG_FRACE
  /* open the elf file. */
  init_ftrace(elf_file);
  #endif
  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm());

  /* Display welcome message. */
  welcome();
}
#ifdef CONFIG_FTRACE
int strtab_idx=0;
int symtab_idx = 0;
Elf32_Ehdr ehdr;
char *strtab;
void init_ftrace(char *elf_file){
  FILE *fp1 = fopen("ftrace_log.txt","w");
  fclose(fp1);
  FILE *fp = fopen(elf_file,"rb");
  if(fp == NULL){
    perror("fopen");
    return;
  }

  if((fread(&ehdr, sizeof(Elf32_Ehdr), 1, fp)) != 1)
    perror("fread");
  Elf32_Shdr shdr;
  fseek(fp, ehdr.e_shoff + ehdr.e_shentsize * ehdr.e_shstrndx, SEEK_SET);
  if((fread(&shdr,ehdr.e_shentsize,1,fp) != -1))
    perror("fread");

  char *shstrtab = malloc(shdr.sh_size);
  fseek(fp, shdr.sh_offset, SEEK_SET);
  if((fread(shstrtab,shdr.sh_size,1,fp) != -1))
    perror("fread");

  strtab_idx = -1 ; symtab_idx = -1;
  for(int i = 0; i < ehdr.e_shnum; i++){
    Elf32_Shdr shdr;
    fseek(fp, ehdr.e_shoff + i * ehdr.e_shentsize, SEEK_SET);
    if((fread(&shdr,ehdr.e_shentsize,1,fp) != 1))
      perror("fread");
    char *name = shstrtab + shdr.sh_name;
    if(strcmp(name,".strtab") == 0){
      strtab_idx = i;
      fseek(fp, shdr.sh_offset, SEEK_SET);
      strtab = malloc(shdr.sh_size);
      if(fread(strtab,shdr.sh_size,1,fp) != 1)
        perror("fread");
    }
    else if(strcmp(name,".symtab") == 0){
      symtab_idx = i;
    }
  }
  free(shstrtab);
}

void ftrace(int rd ,int src1 ,vaddr_t dnpc, vaddr_t pc){
  FILE *fp = fopen(elf_file,"rb");
  FILE *fp1 = fopen("ftrace_log.txt","a");
  Elf32_Sym sym;
  fseek(fp,ehdr.e_shoff + symtab_idx * ehdr.e_shentsize,SEEK_SET);
  Elf32_Shdr symtab;
  if((fread(&symtab,sizeof(Elf32_Shdr),1,fp) != 1))
    perror("fread");
  fseek(fp,symtab.sh_offset,SEEK_SET);
  for(int i = 0; i < symtab.sh_size/sizeof(Elf32_Sym); i++){
    if((fread(&sym,sizeof(Elf32_Sym),1,fp) != 1))
      perror("fread");
    if(rd == 1){
      if((dnpc >= sym.st_value && dnpc < sym.st_value+sym.st_size) && ELF32_ST_TYPE(sym.st_info) == STT_FUNC){
        fprintf(fp1,"0x%x  call [%s@0x%x]\n",pc,strtab + sym.st_name,dnpc);
        fflush(fp1);
      }
    }
    else if(rd == 0 && src1 == 1){
      if((pc >= sym.st_value && pc < sym.st_value+sym.st_size) && ELF32_ST_TYPE(sym.st_info) == STT_FUNC){
        fprintf(fp1,"0x%x  ret  [%s]\n",pc,strtab + sym.st_name);
        fflush(fp1);
      }
    }
    //fseek(fp,sizeof(Elf32_Sym),SEEK_CUR);
  }
  fclose(fp1);
  fclose(fp);
}
#endif

#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
