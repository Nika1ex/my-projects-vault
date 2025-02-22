#include <iostream>

using func_arr = bool (*)(int);

int main(void) {
  int a;
  std::cin >> a;
  func_arr func_filter[] = {[](int a) { return a % 2 == 0; },
                            [](int a) { return a < 0; },
                            [](int a) { return a > 0; }};
  std::cout << func_filter[1](a);
  __ASSERT_TESTS__
  return 0;
}