#include <stdbool.h>
#include <stdio.h>

bool is_positive(int x) { return x >= 0 ? 1 : 0; }

int main(void) {
  int x;
  while (scanf("%d", &x) == 1)
    if (is_positive(x)) printf("%d ", x);
  return 0;
}