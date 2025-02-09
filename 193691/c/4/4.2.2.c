#include <stdio.h>

int main(void) {
  int s = 0, n = 0;
  scanf("%d", &n);
  for (int i = 5; i++ <= n;) s += i;
  printf("%d", s);
  return 0;
}