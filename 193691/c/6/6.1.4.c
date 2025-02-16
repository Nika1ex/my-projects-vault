#include <stdio.h>

int pow_n(int n, int m);

int main(void) {
  int n = 2, m = 4;
  printf("%d", pow_n(n, m));
  return 0;
}

int pow_n(int n, int m) {
  int res = 1;
  for (int i = 1; i <= m; ++i) res *= n;
  return res;
}