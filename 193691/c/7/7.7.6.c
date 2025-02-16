#include <stdio.h>

typedef struct {
  double re;
  double im;
} COMPLEX;

COMPLEX complex_sum(COMPLEX cmp_1, COMPLEX cmp_2) {
  COMPLEX cmp_sum = {cmp_1.re + cmp_2.re, cmp_1.im + cmp_2.im};
  return cmp_sum;
}

int main(void) {
  COMPLEX cmp_1, cmp_2;
  scanf("%lf%lf%lf%lf", &cmp_1.re, &cmp_1.im, &cmp_2.re, &cmp_2.im);
  COMPLEX res = complex_sum(cmp_1, cmp_2);
  __ASSERT_TESTS__
  return 0;
}