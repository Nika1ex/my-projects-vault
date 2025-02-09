#include <stdbool.h>
#include <stdio.h>

int main(void) {
  float x, y;
  bool res;
  scanf("%f%f", &x, &y);
  res = !(x > -5 && y > 0 && x < 10 && y < 7);
  printf("%d", res);
  return 0;
}
