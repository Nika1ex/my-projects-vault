#include <iostream>

int main() {
  bool fl_even = true;
  int n;
  do {
    std::cin >> n;
    if (n % 2) fl_even &= 0;
  } while (n);
  fl_even ? puts("even") : puts("no");
  return 0;
}