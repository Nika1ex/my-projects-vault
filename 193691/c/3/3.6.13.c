#include <math.h>
#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d, %d", &a, &b);
  double tan = (double)a / b;
  double alfa = atan(tan);
  printf("%.2lf %.2lf", tan, alfa);
  return 0;
}