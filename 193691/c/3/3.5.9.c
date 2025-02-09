#include <stdio.h>

int main(void) {
  unsigned int x;
  scanf("%u", &x);
  x <<= 3;
  printf("%u", x);
  return 0;
}
