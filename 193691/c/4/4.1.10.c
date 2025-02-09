#include <stdio.h>

int main(void) {
  int a, b, min, max;
  if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0) {
    printf("input error");
    return 0;
  }
  if (a < b) {
    min = a;
    max = b;
  } else {
    min = b;
    max = a;
  }
  while (min > 0) {
    int rem = max % min;
    max = min;
    min = rem;
  }
  printf("%d", max);
  return 0;
}