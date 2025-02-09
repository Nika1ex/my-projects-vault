#include <cmath>
#include <iostream>

double triangle_sq(int a, int b, int c) {
  double p = (double)(a + b + c) / 2;
  double S = sqrt(p * (p - a) * (p - b) * (p - c));
  return S;
}

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  printf("%.2f\n", triangle_sq(a, b, c));
  return 0;
}