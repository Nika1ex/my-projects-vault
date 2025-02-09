#include <stdio.h>

int main(void) {
  int n, a = 1, b = 1, c = 0;
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("input error!");
    return 0;
  }
  printf("%d %d ", a, b);
  n -= 2;
  while (n) {
    c = a + b;
    printf("%d ", c);
    a = b;
    b = c;
    n -= 1;
  }
  return 0;
}
