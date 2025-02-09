#include <stdio.h>

int main(void) {
  int a1;
  int a50;
  scanf("%d, %d", &a1, &a50);
  int sum = (double)(a1 + a50) / 2 * 50;
  printf("%d", sum);
  return 0;
}