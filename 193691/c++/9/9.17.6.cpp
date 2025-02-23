#include <iostream>

int main(void) {
  int w, h;
  std::cin >> w >> h;
  auto sum_ab = [=]() { return w + h; };
  std::cout << sum_ab();
  __ASSERT_TESTS__
  return 0;
}