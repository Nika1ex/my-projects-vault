#include <cmath>
#include <iostream>

int main(void) {
  int a, b, c;
  std::cin >> a >> b >> c;
  auto sq_tr = [](int a, int b, int c) {
    double p = (double)(a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
  };
  printf("%.2lf", sq_tr(a, b, c));
  __ASSERT_TESTS__
  return 0;
}