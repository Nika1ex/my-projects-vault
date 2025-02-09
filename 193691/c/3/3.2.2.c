#include <stdio.h>

int main(void) {
  short x, y;
  short min;
  if (scanf("%hd, %hd", &x, &y) != 2) {
    printf("Input error.");
    return 0;
  }
  if (x > y)
    min = y;
  else
    min = x;
  printf("%hd", min);
  return 0;
}