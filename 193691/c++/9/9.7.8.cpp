#include <cmath>
#include <iostream>

#define EPS 1e-6

enum { corners = 4 };

struct point {
  int x, y;
};

double rect_area(point A, point B, point C) {
  double a1 = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
  double a2 = sqrt(pow(A.x - C.x, 2) + pow(A.y - C.y, 2));
  double a3 = sqrt(pow(B.x - C.x, 2) + pow(B.y - C.y, 2));
  double p = (a1 + a2 + a3) / 2;
  double S = sqrt(p * (p - a1) * (p - a2) * (p - a3));
  return S;
}

int main() {
  point figure[corners];
  point pt;
  int count = 0;
  while (count < corners &&
         scanf("%d; %d", &figure[count].x, &figure[count].y) == 2)
    count++;
  if (count != corners) {
    puts("Неверное количество или формат входных данных.");
    return 1;
  }
  if (scanf("%d; %d", &pt.x, &pt.y) != 2) {
    puts("Неверное количество или формат входных данных.");
    return 2;
  }
  double S_pt;
  for (int i = 0; i < corners; ++i)
    if (i != corners - 1)
      S_pt += rect_area(pt, figure[i], figure[i + 1]);
    else
      S_pt += rect_area(pt, figure[corners - 1], figure[0]);
  double S_quad = rect_area(figure[0], figure[1], figure[2]) +
                  rect_area(figure[2], figure[3], figure[0]);
  fabs(S_pt - S_quad) < EPS ? puts("yes") : puts("no");
  return 0;
}