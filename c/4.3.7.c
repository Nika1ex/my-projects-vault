#include <stdio.h>

int main(void) {
  int n;
  if (scanf("%d", &n) != 1 || n <= 0) {
    puts("input error");
    return 0;
  }
  int k = n - 1;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n + i; ++j) j < k ? putchar(' ') : putchar('*');
    putchar('\n');
    --k;
  }
  return 0;
}