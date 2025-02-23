#include <iostream>

int main(void) {
  tag_price pr = price_100;
  std::cout << pr.name << ' ' << (int)pr.rubs << ' ' << (int)pr.kops << ' '
            << (int)pr.foreign_key << std::endl;
  __ASSERT_TESTS__
  return 0;
}