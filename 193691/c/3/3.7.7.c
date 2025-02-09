#include <math.h>
#include <stdio.h>

#define MAX_LENGTH 100

int main(void) {
  int x, y;
  scanf("%d %d", &x, &y);
  double length = sqrt(x * x + y * y);
  length > MAX_LENGTH ? printf("Radius length exceeds value of MAX_LENGTH")
                      : printf("%.2lf", length);
  return 0;
}
