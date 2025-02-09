#include <stdio.h>

int main(void) {
  int n, first, second, s1 = 0, s2 = 0;
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("input error");
    return 0;
  }
  first = n / 1000;
  second = n % 1000;
  while (first || second) {
    s1 += first % 10;
    s2 += second % 10;
    first /= 10;
    second /= 10;
  }
  s1 == s2 ? printf("yes") : printf("no");
  return 0;
}