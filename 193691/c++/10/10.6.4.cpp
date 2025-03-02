#include <iostream>
#include <memory>

int main(void) {
  int x;
  std::cin >> x;
  std::unique_ptr<int> p_int = std::make_unique<int>(x);
  std::cout << *p_int << std::endl;
  __ASSERT_TESTS__
  return 0;
}