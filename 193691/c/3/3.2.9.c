#include <stdio.h>

int main(void) {
  float a, b, c;
  if (scanf("%f,%f,%f", &a, &b, &c) != 3) {
    printf("Input error.");
    return 0;
  }
  if (a < b && a < c)
    printf("%.2f", a);
  else if (b < a && b < c)
    printf("%.2f", b);
  else
    printf("%.2f", c);
  return 0;
}
