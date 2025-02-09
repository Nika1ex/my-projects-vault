#include <stdio.h>

#define PI 3.1415
#define GRAD 180 / PI

int main(void) {
  double grad, rad;
  scanf("%lf", &rad);
  grad = rad * GRAD;
  printf("%.2lf", grad);
  return 0;
}