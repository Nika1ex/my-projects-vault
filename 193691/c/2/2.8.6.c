#include <stdio.h>

int main(void) {
  int s, m;
  scanf("%d%d", &s, &m);
  float res = (float)2 * s * (100 - m) / 100;
  printf("%.2f", res);
  return 0;
}