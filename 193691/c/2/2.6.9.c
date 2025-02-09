#include <math.h>
#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  double r = sqrt(3) * a / 6;
  printf("%.3lf", r);
  return 0;
}