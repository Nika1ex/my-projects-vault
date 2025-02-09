#include <math.h>
#include <stdio.h>

int main(void) {
  unsigned short N;
  scanf("%hu", &N);
  int S = round(N * 2.54);
  printf("%d", S);
  return 0;
}