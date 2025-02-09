#include <stdio.h>

int main(void) {
  int a, b, c, d;
  scanf("%d%d%d%d", &a, &b, &c, &d);
  if ((c <= a - 1 && d <= b - 1) || (c <= b - 1 && d <= a - 1))
    printf("yes");
  else
    printf("no");
  return 0;
}