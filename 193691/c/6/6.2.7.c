#include <stdio.h>

int is_range(double x, double a, double b);

int main(void) {
  double x;
  while (scanf("%lf", &x) == 1) {
    if (!(is_range(x, -2.5, 3.5))) printf("%.1lf ", x);
    if (getchar() == '\n') break;
  }
  return 0;
}

int is_range(double x, double a, double b) { return (x > a && x < b ? 1 : 0); }