#include <math.h>
#include <stdio.h>

double get_length(int x, int y);

int main(void) {
  int x, y;
  scanf("%d%d", &x, &y);
  printf("%.2lf", get_length(x, y));
  return 0;
}

double get_length(int x, int y) { return sqrt(x * x + y * y); }