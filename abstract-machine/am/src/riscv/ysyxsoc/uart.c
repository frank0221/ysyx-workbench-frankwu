#include <am.h>

#define UART_BASE 0x10000000L
#define UART_TX   0x0L
#define UART_RX   0x0L
#define UART_REG_LS 0x5L
void __am_uart_rx(AM_UART_RX_T *uart){
    char LSR_0;
    LSR_0 = (*(volatile char  *)(UART_BASE + UART_REG_LS) & (0x01));
    if(LSR_0==0x01)
        uart->data =  *(volatile char  *)(UART_BASE + UART_RX);
    else
        uart->data = 0xff;
}