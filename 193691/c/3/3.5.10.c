#include <stdio.h>

int main(void) {
  unsigned int a, b;
  scanf("%u%u", &a, &b);
  a >>= 1;
  b >>= 1;
  printf("%u", a * b);
  return 0;
}
