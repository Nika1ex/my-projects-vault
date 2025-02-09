#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  a *= 3;
  b -= 10;
  int res = a * b;
  printf("%d", res);
  return 0;
}