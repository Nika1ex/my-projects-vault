#include <stdio.h>

int main(void) {
  int n;
  double s = 0;
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("input error");
    return 0;
  }
  do {
    s += (double)1 / n;
  } while (--n);
  printf("%.2lf", s);
  return 0;
}