#include <stdio.h>

#define KMH 3.6

int main(void) {
  int s_mc;
  scanf("%d", &s_mc);
  double s_kmh = s_mc * KMH;
  printf("%.2lf", s_kmh);
  return 0;
}