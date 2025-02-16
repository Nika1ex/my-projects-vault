#ifdef __cplusplus
#include <iostream>
#else
#include <stdio.h>
#endif

#ifdef __cplusplus
extern "C"
#endif
    double
    mean_2(int a, int b) {
  return (a + b) / 2.0;
}

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%.1lf", mean_2(a, b));
  return 0;
}