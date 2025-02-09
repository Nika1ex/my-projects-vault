#include <stdio.h>

int main(void) {
  int angle;
  scanf("%d", &angle);
  angle = angle % 360;
  printf("%d", angle);
  return 0;
}