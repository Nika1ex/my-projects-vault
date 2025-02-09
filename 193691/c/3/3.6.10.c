#include <math.h>
#include <stdio.h>

int main(void) {
  unsigned short N;
  scanf("%hu", &N);
  int res = ceil(7.0 * N / 100);
  printf("%d", res);
  return 0;
}