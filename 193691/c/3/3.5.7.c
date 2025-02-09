#include <stdio.h>

int main(void) {
  unsigned char bits;
  scanf("%hhu", &bits);
  unsigned char mask = 0b00001001;
  unsigned char res = bits ^ mask;
  printf("%d", res);
  return 0;
}