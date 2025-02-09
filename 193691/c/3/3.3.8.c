#include <stdio.h>

int main(void) {
  unsigned int a, b, h;
  if (scanf("%u,%u,%u", &a, &b, &h) != 3) {
    printf("Input error.");
    return 0;
  }
  double S = (double)(a + b) * h / 2;
  printf("%.1lf", S);
  return 0;
}
