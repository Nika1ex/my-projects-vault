#include <math.h>
#include <stdio.h>

#define GIPOT(a, b) sqrt((a) * (a) + (b) * (b))

int main(void) {
  int a, b;
  if (scanf("%d, %d", &a, &b) != 2) {
    printf("Input error");
    return 0;
  }
  double length = GIPOT(a + 3, b - 2);
  printf("%.2lf", length);
  __ASSERT_TESTS__
  return 0;
}