#include <iostream>

int main() {
  bool fl_even = false;
  int n;
  do {
    std::cin >> n;
    if (n && !(n % 2)) fl_even |= 1;
  } while (n);
  fl_even ? puts("even") : puts("no");
  return 0;
}