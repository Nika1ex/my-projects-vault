#include <iostream>

int main(void) {
  short digits[] = {5, -4, 3, 10, 2, 7, 9, 2};
  int size_ar = sizeof(digits) / sizeof(*digits);
  for (int i = 2; i < size_ar - 1; ++i)
    digits[i] = digits[i + 1];
  __assertion_tests(digits);
  return 0;
}