#include <iostream>

using std::cin;

int min2(int a, int b) { return a < b ? a : b; }

double min2(double a, double b) { return a < b ? a : b; }

int main() {
  int a;
  double b;
  cin >> a >> b;
  printf("%.1lf", min2((double)a, b));
  return 0;
}