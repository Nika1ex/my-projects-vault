#include <stdio.h>

int main(void) {
  short buffer[1024];
  buffer[0] = 13;
  __ASSERT_TESTS__
  return 0;
}