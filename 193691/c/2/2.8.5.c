#include <stdio.h>

int main(void) {
  float a, b;
  scanf("%f%f", &a, &b);
  float res = (a + b) * 2;
  printf("Периметр: %.1f", res);
  return 0;
}