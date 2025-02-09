#include <stdio.h>

int main(void) {
  float a, b, c;
  if (scanf("%f,%f,%f", &a, &b, &c) != 3 || a <= 0 || b <= 0 || c <= 0) {
    printf("Input error.");
    return 0;
  }
  if (a + b > c && a + c > b && b + c > a)
    printf("yes");
  else
    printf("no");
  return 0;
}
