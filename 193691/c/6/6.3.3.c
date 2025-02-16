#include <math.h>
#include <stdio.h>

double get_geom(int a, int b);

int main(void) {
  int a, b;
  scanf("%d, %d", &a, &b);
  printf("%.2lf", get_geom(a, b));
  return 0;
}

double get_geom(int a, int b) { return sqrt(a * b); }