#include <iostream>

using std::cin;
using std::cout;
using std::endl;

inline int get_max_3(int a, int b, int c) {
  return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << get_max_3(a, b, c) << endl;
  return 0;
}