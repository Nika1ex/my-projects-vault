#include <stdio.h>

int main(void) {
  unsigned char bits;
  scanf("%hhu", &bits);
  unsigned char mask = 16 + 4 + 1;
  unsigned short res = bits | mask;
  printf("%hd", res);
  return 0;
}