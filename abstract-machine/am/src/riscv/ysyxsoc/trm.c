#include <am.h>
#include <klib-macros.h>
#include <klib.h>

extern char _heap_start;
extern char _heap_end;
int main(const char *args);
void _trm_init(void);


Area heap = RANGE(&_heap_start, &_heap_end);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER);

#define UART_BASE 0x10000000L
#define UART_TX   0x0L
#define UART_RX   0x0L
#define UART_REG_LC 0x3L
#define UART_REG_DL1 0x0L
#define UART_REG_DL2 0x1L
#define UART_REG_LS 0x5L

void uart_init(){
  char LCR = *(volatile char  *)(UART_BASE + UART_REG_LC);
  *(volatile char  *)(UART_BASE + UART_REG_LC)  = 0x80;
  *(volatile char  *)(UART_BASE + UART_REG_DL2) = 0x00;
  *(volatile char  *)(UART_BASE + UART_REG_DL1) = 0x1b;
  *(volatile char  *)(UART_BASE + UART_REG_LC)  = LCR & (~0x80);
}

void putch(char ch) {
  char LSR_5 = 0x00;
  while(LSR_5 != 0x20)
    LSR_5 = (*(volatile char  *)(UART_BASE + UART_REG_LS) & (0x20));
  *(volatile char  *)(UART_BASE + UART_TX) = ch;
}

void halt(int code) {
  __asm__ volatile ("ebreak");
  while (1);
}

void* __attribute__((section(".bootloader_text"))) boot_memset(void *s, int c, size_t n) {
  unsigned char *p = (unsigned char *) s;
  for(int i = 0; i < n; i++){
    p[i] = (unsigned char)c;
  }
  return s;
}

void* __attribute__((section(".bootloader_text"))) boot_memcpy(void *out, const void *in, size_t n) {

  unsigned char* dst = (unsigned char *)out;
  unsigned char* src = (unsigned char *)in;
  for(int i = 0; i < n; i++){
    dst[i] = src[i];
  }
  return dst;
}

extern char data_vma_start[], data_vma_end[], data_lma_start[];
extern char _bss_start, _bss_end;
extern char text_lma_start[], text_lma_end[], text_vma_start[], text_vma_end[];
extern char rodata_lma_start[], rodata_lma_end[], rodata_vma_start[], rodata_vma_end[];

void __attribute__((section(".bootloader_text")))  bootloader(){
  boot_memcpy(text_vma_start, text_lma_start,   (text_vma_end - text_vma_start));
  boot_memcpy(rodata_vma_start,  rodata_lma_start, (rodata_vma_end - rodata_vma_start));
  boot_memcpy(data_vma_start, data_lma_start,   (data_vma_end-data_vma_start));
  //boot_memset(&_bss_start,0,&_bss_end - &_bss_start);
  _trm_init();
}

extern char bootloader_lma_start[], bootloader_vma_start[], bootloader_vma_end[];
void __attribute__((section(".FSBL"))) fsbl(){
  boot_memcpy(bootloader_vma_start, bootloader_lma_start,   (bootloader_vma_end - bootloader_vma_start));
  bootloader();
}

void read_ID(){
  int ID;
  int ID_ascii;
  asm volatile(
  "csrr %0, mvendorid"
  :"=r"(ID_ascii)
  :
  :
  );
  asm volatile(
  "csrr %0, marchid"
  :"=r"(ID)
  :
  :
  );
  printf("=====I AM YSYX STUIDENT. MY ID:%d ID_ascii:%d=====\n",ID,ID_ascii);
}

void _trm_init() {
  uart_init();
  // printf("hello\n");
  read_ID();
  int ret = main(mainargs);
  halt(ret);
}
