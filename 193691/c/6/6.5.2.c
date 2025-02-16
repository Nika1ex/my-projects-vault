#include <stdio.h>

double max_2(double a, double b) { return (a > b) ? a : b; }

int main(void) {
  double a, b;
  scanf("%lf, %lf", &a, &b);
  __ASSERT_TESTS__
  return 0;
}