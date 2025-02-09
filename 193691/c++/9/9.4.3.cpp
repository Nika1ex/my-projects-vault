#include <iostream>

namespace triangle {
int perimetr(int a, int b, int c) { return a + b + c; }
}  // namespace triangle

namespace rectangle {
int perimetr(int width, int height) { return (width + height) * 2; }
}  // namespace rectangle

int main() {
  int a0, a1, a2;
  std::cin >> a0 >> a1 >> a2;
  std::cout << triangle::perimetr(a0, a1, a2) << ' '
            << rectangle::perimetr(a0, a1);
  return 0;
}