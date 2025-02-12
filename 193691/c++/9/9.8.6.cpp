#include <cmath>
#include <iostream>

struct point {
  int x, y;
};

double sq_tr(point& A, point& B, point& C) {
  double a1 = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
  double a2 = sqrt(pow(A.x - C.x, 2) + pow(A.y - C.y, 2));
  double a3 = sqrt(pow(B.x - C.x, 2) + pow(B.y - C.y, 2));
  double p = (a1 + a2 + a3) / 2;
  return sqrt(p * (p - a1) * (p - a2) * (p - a3));
}

int main() {
  point pt[3];
  for (int i = 0; i < 3; ++i) scanf("%d%d", &pt[i].x, &pt[i].y);
  printf("%.2lf", sq_tr(pt[0], pt[1], pt[2]));
  return 0;
}