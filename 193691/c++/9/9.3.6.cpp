#include <iostream>

enum { max_size_ar = 20 };

int main() {
  int data[max_size_ar];
  int count = 0;
  while (count < max_size_ar) {
    std::cin >> data[count++];
    if (getchar() == EOF) break;
  }
  for (int i = 0; i < count; ++i) std::cout << data[i] << ' ';
  __ASSERT_TESTS__
  return 0;
}