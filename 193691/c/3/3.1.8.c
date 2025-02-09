#include <stdbool.h>
#include <stdio.h>

int main(void) {
  float a;
  bool res;
  scanf("%f", &a);
  res = (a >= -10 && a < 0) || (a > 5 && a <= 12);
  printf("%d", res);
  return 0;
}