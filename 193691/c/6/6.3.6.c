#include <stdio.h>
#define PI 3.1415

double circle_len(double R);

int main(void) {
  double R;
  scanf("%lf", &R);
  printf("%.2lf", circle_len(R));
  return 0;
}

double circle_len(double R) { return 2 * PI * R; }