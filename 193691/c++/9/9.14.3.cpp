#include <iostream>

using calc_type = enum { calc_perimetr, calc_square };
using std::cin;
using std::cout;

int get_rect_value(int a, int b, calc_type type = calc_perimetr) {
  return type == calc_perimetr ? 2 * (a + b) : a * b;
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << get_rect_value(a, b);
  return 0;
}