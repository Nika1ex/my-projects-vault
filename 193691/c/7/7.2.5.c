#include <stdio.h>

int main(void) {
  int n, a = 1;
  if (scanf("%d", &n) == 1 && n > 0)
    while (a <= n) {
      if (n % a == 0) printf("%d ", a);
      ++a;
    }
  return 0;
}