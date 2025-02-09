#include <stdio.h>

int main(void) {
  int a, b;
  float c;
  scanf("%d,%d,%*f,%f", &a, &b, &c);
  printf("%d %d %.2f", a, b, c);
  return 0;
}