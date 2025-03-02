#include <iostream>

int main(void) {
  long* ar_long = new long[1000]();
  ar_long[4] = -7;
  __ASSERT_TESTS__
  delete[] ar_long;
  return 0;
}