#include <cmath>
#include <iostream>

using std::cin;

double get_square(int a, int b, int c) {
  double p = (a + b + c) / 2.0;
  return sqrt(p * (p - a) * (p - b) * (p - c));
}

int get_square(int a, int b) { return a * b; }

int main() {
  int data[5];
  for (int i = 0; i < 5; ++i) cin >> data[i];
  printf("%.1lf %.1lf", get_square(data[0], data[1], data[2]),
         (double)get_square(data[3], data[4]));
  return 0;
}