#include <stdbool.h>
#include <stdio.h>

int main(void) {
  float a;
  bool res;
  scanf("%f", &a);
  res = (int)a % 5 == 0;
  printf("%d", res);
  return 0;
}