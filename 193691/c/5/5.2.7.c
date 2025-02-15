#include <stdio.h>

int main(void) {
  long digits[128] = {[16] = 4, [32] = 5, [64] = 6};
  __ASSERT_TESTS__
  return 0;
}