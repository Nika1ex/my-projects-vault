#include <math.h>
#include <stdio.h>
#define M_PI 3.1415

int main(void) {
  double grad;
  scanf("%lf", &grad);
  double res = sin(grad * M_PI / 180.0);
  printf("%.1lf", res);
  return 0;
}
