#include <stdio.h>

int main(void) {
  char str[100] = "Best string!";
  str[11] = '.';
  __ASSERT_TESTS__
  return 0;
}