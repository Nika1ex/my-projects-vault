#include <stdio.h>

int main(void) {
  int n, s = 0;
  if (scanf("%d", &n) != 1 || n <= 0 || n / 10 == 0) {
    printf("input error!");
    return 0;
  }
  while (n) {
    s += n % 10;
    n /= 10;
  }
  printf("%d", s);
  return 0;
}
