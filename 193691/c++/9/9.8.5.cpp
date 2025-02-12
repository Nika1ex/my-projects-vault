#include <cmath>
#include <iostream>

struct POINT {
  double x, y;
};

double get_length(POINT& A, POINT& B) {
  return sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
}

int main() {
  POINT pt1{-2.5, 7.8};
  POINT pt2{11.4, 43.2};
  printf("%.2lf", get_length(pt1, pt2));
  return 0;
}