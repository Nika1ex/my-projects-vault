#include <stdio.h>

int is_even(int n);

int main(void) {
  int x;
  while (scanf("%d", &x) == 1)
    if (is_even(x)) printf("%d ", x);
  return 0;
}

int is_even(int n) {
  int res = 1;
  if (n % 2) res = 0;
  return res;
}