#include <stdio.h>

int fact(int n);

int main(void) {
  int n = 6;
  printf("%d", fact(n));
  return 0;
}

int fact(int n) {
  int res = 1;
  if (n > 0)
    for (int i = 1; i <= n; i++) res *= i;
  else if (n < 0)
    res = -1;
  return res;
}