#include <iostream>

int main(void) {
  short* ptr_ar = new short[15];
  for (int i = 0; i < 15; ++i) ptr_ar[i] = -1;
  ptr_ar[4] = 100;
  __ASSERT_TESTS__
  return 0;
}