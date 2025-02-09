#include <stdbool.h>
#include <stdio.h>

int main(void) {
  float a;
  bool res;
  scanf("%f", &a);
  res = a >= -5.45 && a <= 10.37;
  printf("%d", res);
  return 0;
}
