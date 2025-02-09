#include <stdio.h>

int main(void) {
  int a, b, h;
  scanf("%d,%d,%d", &a, &b, &h);
  double S = (double)(a + b) * h / 2;
  printf("%.1lf", S);
  return 0;
}