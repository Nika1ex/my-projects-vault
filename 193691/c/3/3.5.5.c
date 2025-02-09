#include <stdio.h>

int main(void) {
  unsigned char bits;
  scanf("%hhu", &bits);
  unsigned char mask = 128 + 64;
  unsigned char res = bits & ~mask;
  printf("%hhu", res);
  return 0;
}