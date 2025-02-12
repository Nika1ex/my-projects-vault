#include <cmath>
#include <iostream>

#define EPS 1e-6

enum { corners = 4 };

struct point {
  int x, y;
};

double rect_area(point& A, point& B, point& C) {
  double a1 = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
  double a2 = sqrt(pow(A.x - C.x, 2) + pow(A.y - C.y, 2));
  double a3 = sqrt(pow(B.x - C.x, 2) + pow(B.y - C.y, 2));
  double p = (a1 + a2 + a3) / 2;
  return sqrt(p * (p - a1) * (p - a2) * (p - a3));
}

int main() {
  point figure[corners];
  int count = 0;
  while (count < corners &&
         scanf("%d; %d", &figure[count].x, &figure[count].y) == 2)
    count++;
  if (count != corners) {
    puts("Неверное количество или формат входных данных.");
    return 1;
  }
  double S_quad = rect_area(figure[0], figure[1], figure[2]) +
                  rect_area(figure[2], figure[3], figure[0]);
  int x_min = figure[0].x, x_max = figure[0].x, y_min = figure[0].y,
      y_max = figure[0].y;
  for (int i = 1; i < corners; ++i) {
    if (figure[i].x < x_min) x_min = figure[i].x;
    if (figure[i].x > x_max) x_max = figure[i].x;
    if (figure[i].y < y_min) y_min = figure[i].y;
    if (figure[i].y > y_max) y_max = figure[i].y;
  }
  double S_pt;
  point pt;
  int n = 0;
  for (int i = x_min; i <= x_max; ++i) {
    for (int j = y_min; j <= y_max; ++j) {
      pt = {i, j};
      S_pt = 0;
      for (int k = 0; k < corners; ++k) {
        if (k != corners - 1)
          S_pt += rect_area(pt, figure[k], figure[k + 1]);
        else
          S_pt += rect_area(pt, figure[corners - 1], figure[0]);
      }
      if (fabs(S_pt - S_quad) < EPS) ++n;
    }
  }
  std::cout << n;
  return 0;
}