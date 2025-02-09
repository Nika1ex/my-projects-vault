#include <math.h>
#include <stdio.h>

int main(void) {
  int b1, q, n;
  scanf("%d; %d; %d", &b1, &q, &n);
  for (int i = 0; i < n; i++) {
    printf("%.lf ", b1 * pow(q, i));
  }
  return 0;
}