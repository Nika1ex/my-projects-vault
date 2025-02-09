#include <stdio.h>

int main(void) {
  int n;
  double s = 0;
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("input error!");
    return 0;
  }
  while (n > 0) {
    s += (double)1 / (n * n);
    n--;
  }
  printf("%.3lf", s);
  return 0;
}
