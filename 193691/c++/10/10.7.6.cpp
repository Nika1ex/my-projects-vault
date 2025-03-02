#include <iostream>
#include <memory>

enum { max_size_ar = 10 };

using shared_ari_ptr = std::shared_ptr<int[]>;

int sum_ar(const shared_ari_ptr& ar, size_t len) {
  int sum_ar = 0;
  for (size_t i = 0; i < len; ++i) sum_ar += ar[i];
  return sum_ar;
}

int main(void) {
  shared_ari_ptr ar{new int[max_size_ar]{0}};
  unsigned count = 0;
  while (count < max_size_ar) {
    std::cin >> ar[count++];
    if (std::cin.get() == '\n') break;
  }
  std::cout << sum_ar(ar, count) << std::endl;
  return 0;
}