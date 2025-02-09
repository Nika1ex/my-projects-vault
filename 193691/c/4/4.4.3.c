#include <stdio.h>

int main(void) {
  int a, p = 1;
  do {
    scanf("%d", &a);
    if (a < 0) continue;
    if (a > 0) p *= a;
  } while (a);
  printf("%d", p);
  return 0;
}