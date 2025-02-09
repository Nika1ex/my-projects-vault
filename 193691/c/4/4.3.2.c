#include <stdio.h>

int main(void) {
  int p = 1, n;
  scanf("%d", &n);
  int i = 1;
  do {
    p *= i;
    ++i;
  } while (i <= n);
  printf("%d", p);
  return 0;
}