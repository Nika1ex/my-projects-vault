#include <stdio.h>

int main(void) {
  unsigned int a, b, c;
  if (scanf("%u%u%u", &a, &b, &c) != 3) {
    printf("Input error.");
    return 0;
  }
  a + b > c
      ? (a + c > b ? (b + c > a ? printf("yes") : printf("no")) : printf("no"))
      : printf("no");
  return 0;
}
