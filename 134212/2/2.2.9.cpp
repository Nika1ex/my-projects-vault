#include <iostream>

int main(void) {
  using namespace std;
  short digits[10] = {5, -4, 3, 10, 2, 7, 9, 2};
  for (int i = 9; i >= 5; --i)
    digits[i] = digits[i - 2];
  digits[3] = 101;
  digits[4] = 102;
  __assertion_tests(digits);
  return 0;
}