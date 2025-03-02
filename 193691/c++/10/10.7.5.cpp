#include <iostream>
#include <memory>

int main(void) {
  int x;
  std::cin >> x;
  std::shared_ptr<short> p_val = std::make_shared<short>(x);
  unsigned char* ptr_1 = (unsigned char*)p_val.get();
  unsigned char* ptr_2 = (unsigned char*)p_val.get() + 1;
  std::cout << (unsigned int)*ptr_1 << ' ' << (unsigned int)*ptr_2 << std::endl;
  __ASSERT_TESTS__
  return 0;
}