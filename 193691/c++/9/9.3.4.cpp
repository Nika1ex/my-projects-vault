#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;
  if (a < b) {
    for (int i = a; i <= b; ++i)
      if (i % 3 == 0)
        std::cout << i << ' ';
  }
  return 0;
}