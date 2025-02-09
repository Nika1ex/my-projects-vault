#include <stdio.h>

int main(void) {
  int h, w;
  scanf("%d %d", &h, &w);
  double res = (double)h / w;
  printf("%.2lf", res);
  return 0;
}