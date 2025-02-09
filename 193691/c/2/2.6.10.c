#include <stdio.h>
#define M_PI 3.1415

int main(void) {
  double R;
  scanf("%lf", &R);
  double l = 2 * M_PI * R;
  printf("%.3lf", l);
  return 0;
}