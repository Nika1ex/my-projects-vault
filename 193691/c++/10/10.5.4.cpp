#include <iostream>

struct complex {
  double re, im;
};

int main(void) {
  complex* vc = new complex[7]();
  __ASSERT_TESTS__
  delete[] vc;
  return 0;
}