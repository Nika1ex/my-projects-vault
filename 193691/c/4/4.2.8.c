#include <stdio.h>

int main(void) {
  int n, s = 0;
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("input error");
    return 0;
  }
  for (int i = 2; i < n; i++) {
    if (i % 3 == 0 || i % 5 == 0) s += i;
  }
  printf("%d", s);
  return 0;
}
