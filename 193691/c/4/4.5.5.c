#include <stdio.h>

int main(void) {
  double var_d = 0;
  double* ptr_var_d = &var_d;
  *ptr_var_d = -54.38;
  __ASSERT_TESTS__
  return 0;
}