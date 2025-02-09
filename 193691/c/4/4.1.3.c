#include <stdio.h>

int main(void) {
  int a;
  while (scanf("%d", &a) == 1 && a != 0) printf("%d ", a * a);
  return 0;
}