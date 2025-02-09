#include <math.h>
#include <stdio.h>

int main(void) {
  int b1;
  int q;
  int n = 4;
  scanf("%d, %d", &b1, &q);
  int sum = (pow(q, n) - 1) * b1 / (q - 1);
  printf("%d", sum);
  return 0;
}