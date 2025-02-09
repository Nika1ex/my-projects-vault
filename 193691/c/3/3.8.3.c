#include <stdio.h>

#define GET_MAX(a, b) a > b ? a : b

int main(void) {
  double val_1, val_2;
  if (scanf("%lf; %lf", &val_1, &val_2) != 2) {
    printf("Input error");
    return 0;
  }
  double res = (GET_MAX(val_1 + 1, val_2 - 1)) / (val_1 + val_2);
  printf("%.2lf", res);
  __ASSERT_TESTS__
  return 0;
}