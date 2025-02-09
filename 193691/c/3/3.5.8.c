#include <stdio.h>

int main(void) {
  unsigned char x;
  scanf("%hhu", &x);
  x >>= 2;
  printf("%hhd", x);
  return 0;
}