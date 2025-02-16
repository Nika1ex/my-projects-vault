#include <stdbool.h>
#include <stdio.h>

bool is_prime(int a) {
  for (int i = 2; i < a; ++i)
    if (a % i == 0) return false;
  return true;
}

int main(void) {
  int n, a = 2;
  if (scanf("%d", &n) == 1 && n > 0)
    while (a <= n) {
      if (n % a == 0 && is_prime(a)) {
        printf("%d ", a);
        n /= a;
      } else
        ++a;
    }
  return 0;
}