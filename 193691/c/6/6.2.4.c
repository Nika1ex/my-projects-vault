#include <stdio.h>

double get_mean2(int a, int b);

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%.1lf", get_mean2(a, b));
  return 0;
}

double get_mean2(int a, int b) { return (double)(a + b) / 2; }