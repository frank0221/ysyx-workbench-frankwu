#include <am.h>
#include <klib-macros.h>
#include <klib.h>

#define UART_BASE    0x10000000u
#define UART_TX      0x0u
#define UART_REG_LC  0x3u
#define UART_REG_DL1 0x0u
#define UART_REG_DL2 0x1u
#define UART_REG_LS  0x5u

/*
 * 注意：
 * 如果你的程序本身在 0xa0000000 附近运行，不要从 0xa0000000 开始测，
 * 否则会覆盖自己的 .text/.rodata/.data/stack。
 *
 * 你截图里 BASE=a0010000，可以继续用这个。
 * 如果程序变大了，可以改成 0xa0020000 或更高。
 */
#define SDRAM_TEST_BASE  0xa0010000u

#define TEST_WORDS_SMALL 1024u
#define TEST_WORDS_BIG   4096u



static void putch_raw(char ch) {
  unsigned char lsr5 = 0;

  while (lsr5 != 0x20) {
    lsr5 = (*(volatile unsigned char *)(UART_BASE + UART_REG_LS)) & 0x20;
  }

  *(volatile unsigned char *)(UART_BASE + UART_TX) = ch;
}

static void puts_raw(const char *s) {
  while (*s) {
    putch_raw(*s++);
  }
}

static void puthex4(unsigned int x) {
  x &= 0xfu;

  if (x < 10u) {
    putch_raw('0' + x);
  } else {
    putch_raw('a' + x - 10u);
  }
}

static void puthex32(unsigned int x) {
  puthex4(x >> 28);
  puthex4(x >> 24);
  puthex4(x >> 20);
  puthex4(x >> 16);
  puthex4(x >> 12);
  puthex4(x >> 8);
  puthex4(x >> 4);
  puthex4(x >> 0);
}

static void pass(unsigned int code) {
  putch_raw('P');
  puthex32(code);
  putch_raw('\n');
}

static void fail(unsigned int code, unsigned int addr, unsigned int got, unsigned int exp) {
  putch_raw('F');
  puthex32(code);
  putch_raw(' ');
  puthex32(addr);
  putch_raw(' ');
  puthex32(got);
  putch_raw(' ');
  puthex32(exp);
  putch_raw('\n');

  while (1) {
  }
}

static void mark2(char a, char b) {
  putch_raw(a);
  putch_raw(b);
  putch_raw('\n');
}

/*
 * 0x101:
 * 最基本 word 读写。
 */
static void test_word_basic(void) {
  volatile unsigned int *p = (volatile unsigned int *)SDRAM_TEST_BASE;

  p[0] = 0x00000000u;
  if (p[0] != 0x00000000u) fail(0x101, SDRAM_TEST_BASE, p[0], 0x00000000u);

  p[0] = 0xffffffffu;
  if (p[0] != 0xffffffffu) fail(0x101, SDRAM_TEST_BASE, p[0], 0xffffffffu);

  p[0] = 0xaaaaaaaau;
  if (p[0] != 0xaaaaaaaau) fail(0x101, SDRAM_TEST_BASE, p[0], 0xaaaaaaaau);

  p[0] = 0x55555555u;
  if (p[0] != 0x55555555u) fail(0x101, SDRAM_TEST_BASE, p[0], 0x55555555u);

  p[0] = 0x12345678u;
  if (p[0] != 0x12345678u) fail(0x101, SDRAM_TEST_BASE, p[0], 0x12345678u);

  p[0] = 0x87654321u;
  if (p[0] != 0x87654321u) fail(0x101, SDRAM_TEST_BASE, p[0], 0x87654321u);

  p[0] = 0xdeadbeefu;
  if (p[0] != 0xdeadbeefu) fail(0x101, SDRAM_TEST_BASE, p[0], 0xdeadbeefu);

  pass(0x101);
}

/*
 * 0x102:
 * 地址线 / 地址映射。
 */
static void test_address_alias(void) {
  volatile unsigned int *p = (volatile unsigned int *)SDRAM_TEST_BASE;

  for (unsigned int i = 0; i < 16u; i++) {
    unsigned int index = 1u << i;
    p[index] = 0xa5000000u | index;
  }

  for (unsigned int i = 0; i < 16u; i++) {
    unsigned int index = 1u << i;
    unsigned int exp = 0xa5000000u | index;
    unsigned int got = p[index];

    if (got != exp) {
      fail(0x102, SDRAM_TEST_BASE + (index << 2), got, exp);
    }
  }

  pass(0x102);
}

/*
 * 0x200:
 * byte / half 读写。
 */
static void test_byte_half(void) {
  volatile unsigned int   *w = (volatile unsigned int *)SDRAM_TEST_BASE;
  volatile unsigned short *h = (volatile unsigned short *)SDRAM_TEST_BASE;
  volatile unsigned char  *b = (volatile unsigned char *)SDRAM_TEST_BASE;

  w[0] = 0x11223344u;

  if (b[0] != 0x44u) fail(0x201, SDRAM_TEST_BASE + 0, b[0], 0x44u);
  if (b[1] != 0x33u) fail(0x202, SDRAM_TEST_BASE + 1, b[1], 0x33u);
  if (b[2] != 0x22u) fail(0x203, SDRAM_TEST_BASE + 2, b[2], 0x22u);
  if (b[3] != 0x11u) fail(0x204, SDRAM_TEST_BASE + 3, b[3], 0x11u);

  if (h[0] != 0x3344u) fail(0x205, SDRAM_TEST_BASE + 0, h[0], 0x3344u);
  if (h[1] != 0x1122u) fail(0x206, SDRAM_TEST_BASE + 2, h[1], 0x1122u);

  w[0] = 0x00000000u;
  b[0] = 0xaau;
  if (w[0] != 0x000000aau) fail(0x207, SDRAM_TEST_BASE + 0, w[0], 0x000000aau);

  w[0] = 0x00000000u;
  b[1] = 0xbbu;
  if (w[0] != 0x0000bb00u) fail(0x208, SDRAM_TEST_BASE + 1, w[0], 0x0000bb00u);

  w[0] = 0x00000000u;
  b[2] = 0xccu;
  if (w[0] != 0x00cc0000u) fail(0x209, SDRAM_TEST_BASE + 2, w[0], 0x00cc0000u);

  w[0] = 0x00000000u;
  b[3] = 0xddu;
  if (w[0] != 0xdd000000u) fail(0x20a, SDRAM_TEST_BASE + 3, w[0], 0xdd000000u);

  w[0] = 0x00000000u;
  h[0] = 0x1234u;
  if (w[0] != 0x00001234u) fail(0x20b, SDRAM_TEST_BASE + 0, w[0], 0x00001234u);

  w[0] = 0x00000000u;
  h[1] = 0x5678u;
  if (w[0] != 0x56780000u) fail(0x20c, SDRAM_TEST_BASE + 2, w[0], 0x56780000u);

  pass(0x200);
}

/*
 * 0x301:
 * 写完立刻读。
 */
static void test_write_read_back_to_back(void) {
  volatile unsigned int *p = (volatile unsigned int *)SDRAM_TEST_BASE;

  for (unsigned int i = 0; i < TEST_WORDS_SMALL; i++) {
    unsigned int exp = 0x10000000u ^ i;

    p[i] = exp;

    unsigned int got = p[i];
    if (got != exp) {
      fail(0x301, SDRAM_TEST_BASE + (i << 2), got, exp);
    }
  }

  pass(0x301);
}

/*
 * 0x401:
 * 连续块读写。
 */
static void test_linear_block(void) {
  volatile unsigned int *p = (volatile unsigned int *)SDRAM_TEST_BASE;

  for (unsigned int i = 0; i < TEST_WORDS_BIG; i++) {
    p[i] = 0x5a000000u | i;
  }

  for (unsigned int i = 0; i < TEST_WORDS_BIG; i++) {
    unsigned int exp = 0x5a000000u | i;
    unsigned int got = p[i];

    if (got != exp) {
      fail(0x401, SDRAM_TEST_BASE + (i << 2), got, exp);
    }
  }

  pass(0x401);
}

/*
 * 0x402:
 * 常见边界地址。
 */
static void test_boundary(void) {
#define WRITE_OFF(off) \
  (*(volatile unsigned int *)(SDRAM_TEST_BASE + (off)) = (0xb0000000u ^ (off)))

#define CHECK_OFF(off) do { \
  unsigned int exp = 0xb0000000u ^ (off); \
  unsigned int got = *(volatile unsigned int *)(SDRAM_TEST_BASE + (off)); \
  if (got != exp) fail(0x402, SDRAM_TEST_BASE + (off), got, exp); \
} while (0)

  WRITE_OFF(0x0000u);
  WRITE_OFF(0x0004u);
  WRITE_OFF(0x00fcu);
  WRITE_OFF(0x0100u);
  WRITE_OFF(0x01fcu);
  WRITE_OFF(0x0200u);
  WRITE_OFF(0x03fcu);
  WRITE_OFF(0x0400u);
  WRITE_OFF(0x07fcu);
  WRITE_OFF(0x0800u);
  WRITE_OFF(0x0ffcu);
  WRITE_OFF(0x1000u);
  WRITE_OFF(0x1ffcu);
  WRITE_OFF(0x2000u);
  WRITE_OFF(0x3ffcu);
  WRITE_OFF(0x4000u);

  CHECK_OFF(0x0000u);
  CHECK_OFF(0x0004u);
  CHECK_OFF(0x00fcu);
  CHECK_OFF(0x0100u);
  CHECK_OFF(0x01fcu);
  CHECK_OFF(0x0200u);
  CHECK_OFF(0x03fcu);
  CHECK_OFF(0x0400u);
  CHECK_OFF(0x07fcu);
  CHECK_OFF(0x0800u);
  CHECK_OFF(0x0ffcu);
  CHECK_OFF(0x1000u);
  CHECK_OFF(0x1ffcu);
  CHECK_OFF(0x2000u);
  CHECK_OFF(0x3ffcu);
  CHECK_OFF(0x4000u);

#undef WRITE_OFF
#undef CHECK_OFF

  pass(0x402);
}

static unsigned int lfsr_next(unsigned int x) {
  unsigned int lsb = x & 1u;

  x = x >> 1;

  if (lsb) {
    x = x ^ 0x80200003u;
  }

  return x;
}

/*
 * 0x501:
 * 伪随机测试。
 */
static void test_lfsr(void) {
  volatile unsigned int *p = (volatile unsigned int *)SDRAM_TEST_BASE;
  unsigned int x = 0x12345678u;

  for (unsigned int i = 0; i < TEST_WORDS_BIG; i++) {
    x = lfsr_next(x);
    p[i] = x;
  }

  x = 0x12345678u;

  for (unsigned int i = 0; i < TEST_WORDS_BIG; i++) {
    x = lfsr_next(x);

    unsigned int got = p[i];
    if (got != x) {
      fail(0x501, SDRAM_TEST_BASE + (i << 2), got, x);
    }
  }

  pass(0x501);
}

/*
 * 0x701:
 * 模拟 bootloader 的 byte copy。
 * 这个要放在 refresh 前面，防止 refresh 卡死导致测不到它。
 */
static void test_byte_copy_like_bootloader(void) {
  volatile unsigned int *w = (volatile unsigned int *)SDRAM_TEST_BASE;
  volatile unsigned char *b = (volatile unsigned char *)SDRAM_TEST_BASE;

  for (unsigned int i = 0; i < 16u; i++) {
    w[i] = 0x00000000u;
  }

  for (unsigned int i = 0; i < 64u; i++) {
    b[i] = (unsigned char)(0x80u | i);
  }

  for (unsigned int i = 0; i < 64u; i++) {
    unsigned int exp = 0x80u | i;
    unsigned int got = b[i];

    if (got != exp) {
      fail(0x701, SDRAM_TEST_BASE + i, got, exp);
    }
  }

  pass(0x701);
}

/*
 * 纯 nop 延时。
 * 如果代码本身在 SDRAM 执行，这里仍然会持续从 SDRAM 取指。
 * 所以它可以测 refresh 期间 IFU 取指是否会卡死。
 */
static void delay_nop(unsigned int n) {
  for (unsigned int i = 0; i < n; i++) {
    asm volatile("nop");
  }
}

/*
 * 0x601:
 * refresh debug 测试。
 *
 * 输出含义：
 * R0：进入 refresh 测试
 * R1：写 SDRAM 完成
 * R2：长延时完成
 * R3：读回检查完成
 * P00000601：refresh 测试通过
 *
 * 如果卡在：
 * R0 后：refresh 和写请求仲裁/写状态机可能死锁
 * R1 后：长时间取指过程中撞上 refresh，IFU/SDRAM refresh 交互可能死锁
 * R2 后：refresh 后读请求/重新 activate/状态恢复可能有问题
 * F00000601：refresh 后数据不一致，刷新周期或 tRFC/tRP/tRCD 可能不对
 */
static void test_refresh_debug(void) {
  volatile unsigned int *p = (volatile unsigned int *)SDRAM_TEST_BASE;

  mark2('R', '0');

  for (unsigned int i = 0; i < TEST_WORDS_BIG; i++) {
    p[i] = 0xcafe0000u ^ i;
  }

  mark2('R', '1');

  delay_nop(100000000u);

  mark2('R', '2');

  for (unsigned int i = 0; i < TEST_WORDS_BIG; i++) {
    unsigned int exp = 0xcafe0000u ^ i;
    unsigned int got = p[i];

    if (got != exp) {
      fail(0x601, SDRAM_TEST_BASE + (i << 2), got, exp);
    }
  }

  mark2('R', '3');

  pass(0x601);
}

int main(const char *args) {

  puts_raw("SDRAM TEST START\n");
  puts_raw("BASE=");
  puthex32(SDRAM_TEST_BASE);
  putch_raw('\n');

  test_word_basic();                 // P00000101
  test_address_alias();              // P00000102
  test_byte_half();                  // P00000200
  test_write_read_back_to_back();    // P00000301
  test_linear_block();               // P00000401
  test_boundary();                   // P00000402
  test_lfsr();                       // P00000501

  /*
   * 这次把 0x701 放到 refresh 前面。
   */
  test_byte_copy_like_bootloader();  // P00000701

  /*
   * 这个现在是带 R0/R1/R2/R3 标记的。
   */
  test_refresh_debug();              // R0 R1 R2 R3 P00000601

  puts_raw("SDRAM TEST ALL PASS\n");

  while (1) {
  }

  return 0;
}