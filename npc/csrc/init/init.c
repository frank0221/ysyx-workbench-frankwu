#include "init.h"
#include <stdint.h>
#include <getopt.h>
#include <stdbool.h>
#include <readline/readline.h>
#include <readline/history.h>

uint8_t* guest_to_host(uint32_t paddr);
uint8_t* flash_guest_to_host(uint32_t addr);
uint32_t pmem_read(uint32_t addr);
void init_difftest(char *ref_so_file, long img_size, int port);

static char *img_file = NULL;
static char *diff_so_file = NULL;
static int difftest_port = 1234;

//#define MROM
#define FLASH
extern uint8_t flash[];
static long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  if (fp == NULL) {
    printf("FATAL: Cannot open image file '%s'\n", img_file);
    printf("Please check if the file exists and you have permission to read it.\n");
    exit(1); 
  }
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
#ifdef MROM
  int ret = fread(guest_to_host(0x20000000), size, 1, fp);
  assert(ret == 1);
#endif
#ifdef FLASH
  // FILE *fp1 = fopen("/home/frank_wu/ysyx-workbench/npc/soc-tests/char-test/char-test.bin", "rb");
  // if(fp1==NULL){
  //   printf("FATAL: Cannot open flash file\n");
  //   exit(1);
  // }
  // fseek(fp1, 0, SEEK_END);
  // uint32_t size1 = ftell(fp1);
  // fseek(fp1, 0, SEEK_SET);
  int ret1 = fread(flash_guest_to_host(0x30000000), size, 1, fp);
  assert(ret1 == 1);
#endif

  // for(int i=0;i<10;i++){
  //   flash[i] = i;
  // }
  
  fclose(fp);
  return size;
}


void init_pmem() {
    uint32_t prog[] = {
    0x000000b7,   // lui  x1, 0
    0x00108093,   // addi x1, x1, 1
    0x00000117,   // auipc x2, 0
    0x00310113,   // addi  x2, x2, 3
    0x000001b7,   // lui  x3, 0
    0x00618193,   // addi x3, x3, 6
    0x00100073    // ebreak
    };
    memcpy(guest_to_host(0x80000000), prog, sizeof(prog));
}

bool batch = false;
bool dump_wave = false;
static int parse_args(int argc,char *argv[]){
  const struct option table[]={
    {"batch"   , no_argument      , NULL, 'b'},
    {"diff"    , required_argument, NULL, 'd'},
    {"wave"    , no_argument      , NULL, 'w'},
  };
  int o;
  while((o = getopt_long(argc, argv, "bd:w", table,NULL)) != -1){
    switch (o)
    {
    case 'b': batch = true; break;
    case 'd': diff_so_file = optarg; break;
    case 'w': dump_wave = true; break;
    default:
      printf("no argument\n");
      break;
    }
  }
  return 0;
}

void init_device(int argc, char *argv[]){ 
    long img_size;
    if (argc < 2) {
        printf("[NPC] no image file given, using built-in\n");
        img_file = NULL;
    } else {
        printf("[NPC] image file = %s\n", argv[1]);
        img_file = argv[1];
    }
    if(img_file ==NULL)
        init_pmem();
    else
        img_size = load_img();

    FILE *fp = fopen("log.txt","w");
    void init_disasm();
    init_disasm();

    parse_args(argc,argv);

    init_difftest(diff_so_file, img_size, difftest_port);
}

static char* rl_gets(){
  static char *line_read = NULL;

  line_read = readline("[npc]");
  if(line_read && *line_read){
    add_history(line_read);
  }
  return line_read;
}

// static int cmd_q(char *args) {
//   //nemu_state.state = NEMU_QUIT;
//   return -1;
// }

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
//  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si","Step through the program",cmd_si},
  { "info","Print reg status and watchpoint info",cmd_info},
  { "x","Scan the memory",cmd_x},
  // { "p","Print the EXPR",cmd_p},
  // { "w","Set watchpoint",cmd_w},
  // { "d","Delete the watchpoint",cmd_d}
  /* TODO: Add more commands */

};


#define NUM_CMD 6

void cmd_process(){
  if(batch){
    cmd_c(NULL);
    return;
  }

  for(char* cmd; (cmd = rl_gets())!= NULL;){
    char *cmd_end = cmd + strlen(cmd);
    char *str = strtok(cmd, " ");
    char *args = cmd + strlen(cmd) + 1;
    int i;
    for(i=0; i < NUM_CMD; i++){
      if(strcmp(str,cmd_table[i].name)==0){
        if(cmd_table[i].handler(args) <0){
          return;
        }
        break;
      }
    }
    if (i == NUM_CMD) { printf("Unknown command '%s'\n", cmd); }
  }

}