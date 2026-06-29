#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

const char ascii_table[128] = {
    // 0x00 - 0x0F (控制字符)
    '\0',   '\x01', '\x02', '\x03', '\x04', '\x05', '\x06', '\a',
    '\b',   '\t',   '\n',   '\v',   '\f',   '\r',   '\x0E', '\x0F',
    // 0x10 - 0x1F (控制字符)
    '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17',
    '\x18', '\x19', '\x1A', '\x1B', '\x1C', '\x1D', '\x1E', '\x1F',
    // 0x20 - 0x2F (标点符号)
    ' ',    '!',    '"',    '#',    '$',    '%',    '&',    '\'',
    '(',    ')',    '*',    '+',    ',',    '-',    '.',    '/',
    // 0x30 - 0x3F (数字和标点符号)
    '0',    '1',    '2',    '3',    '4',    '5',    '6',    '7',
    '8',    '9',    ':',    ';',    '<',    '=',    '>',    '?',
    // 0x40 - 0x4F (大写字母)
    '@',    'A',    'B',    'C',    'D',    'E',    'F',    'G',
    'H',    'I',    'J',    'K',    'L',    'M',    'N',    'O',
    // 0x50 - 0x5F (大写字母和标点符号)
    'P',    'Q',    'R',    'S',    'T',    'U',    'V',    'W',
    'X',    'Y',    'Z',    '[',    '\\',   ']',    '^',    '_',
    // 0x60 - 0x6F (小写字母)
    '`',    'a',    'b',    'c',    'd',    'e',    'f',    'g',
    'h',    'i',    'j',    'k',    'l',    'm',    'n',    'o',
    // 0x70 - 0x7F (小写字母和控制字符)
    'p',    'q',    'r',    's',    't',    'u',    'v',    'w',
    'x',    'y',    'z',    '{',    '|',    '}',    '~',    '\x7F'
};
int printf(const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  const char *src = fmt;
  // int k = 0;
  // char *out;
  int total=0;

  int j = 0;
  for(; *(src + j) != '\0'; j++){

    if(*(src + j) != '%'){
      putch(*(src + j));
      total++;
    }

    if(*(src + j) == '%'){
      if(*(src + j + 1) == 'c'){
         unsigned char temp = (char)va_arg(args,int);
         putch(temp);
         j = j + 1;
      }
      if(*(src + j + 1) == 's'){
        char *temp = va_arg(args,char*);
        while(*temp){
        putch(*temp);
        total++;
        temp++;
        }
        j = j + 1;
      }
      //int b = 0;
      for(;*(src + j + 1) >= '0' && *(src + j +1) <= '9';j++){
      }
      
      if(*(src + j + 1) == 'd'){
        int temp1 = va_arg(args,int);
        char a[sizeof(int) * 3 + 2];
        int i = 0;

        if(temp1 == 0){
          putch('0');
          total++;
        }
        else if(temp1 >0){
          do{
            a[i] = temp1 % 10 + '0'; 
            temp1 = temp1 /10;
            i++;
          }while(temp1 > 0);
          a[i] = '\0';

          for(int h =0; h < i/2; h++){
            char tmp = a[h];
            a[h] = a[i-1-h]; 
            a[i-1-h] = tmp;
          }
          putstr(a);
          total += i ;
        }
        else{
          unsigned int val = -temp1;
          a[i++] = '-';
          do{
            a[i] = val % 10 + '0'; 
            val = val /10;
            i++;
          }while(val > 0);
          a[i] = '\0';

          int left = 1;
          int right = i - 1;  
          while (left < right) {
              char tmp = a[left];
              a[left] = a[right];
              a[right] = tmp;
              left++;
              right--;
          }
          putstr(a);
          total += i;
        }
        j++;

      }
    }
  }
  return total;
  //out[k] = '\0';
  //panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  const char *src = fmt;
  int k = 0;

  int j = 0;
  for(; *(src + j) != '\0'; j++){

    if(*(src + j) != '%'){
      out[k] = *(src +j);
      k++;
    }

    if(*(src + j) == '%'){
      if(*(src + j + 1) == 's'){
        char *temp = va_arg(args,char*);
        while(*temp){
        out[k] = *temp;
        k++;
        temp++;
        }
        j = j + 1;
      }

      if(*(src + j + 1) == 'd'){
        int temp1 = va_arg(args,int);
        char a[sizeof(int) * 3 + 2];
        int i = 0;

        if(temp1 == 0){
          a[i] = '0';
          i++;
          a[i] = '\0';
        }
        else if(temp1 >0){
          do{
            a[i] = temp1 % 10 + '0'; 
            temp1 = temp1 /10;
            i++;
          }while(temp1 > 0);
          a[i] = '\0';

          for(int h =0; h < i/2; h++){
            char tmp = a[h];
            a[h] = a[i-1-h]; 
            a[i-1-h] = tmp;
          }
        }
        else{
          unsigned int val = -temp1;
          a[i++] = '-';
          do{
            a[i] = val % 10 + '0'; 
            val = val /10;
            i++;
          }while(val > 0);
          a[i] = '\0';

          int left = 1;
          int right = i - 1;  
          while (left < right) {
              char tmp = a[left];
              a[left] = a[right];
              a[right] = tmp;
              left++;
              right--;
          }
        }
        int b = 0;
        while(a[b] != '\0'){
          out[k] = a[b];
          k++;
          b++;
        }
        j++;

      }
    }
  }
  out[k] = '\0';
  return k;
  //panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
