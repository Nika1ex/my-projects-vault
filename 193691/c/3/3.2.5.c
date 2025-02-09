#include <stdio.h>

int main(void) {
  unsigned int a, b, c;
  if (scanf("%u, %u, %u", &a, &b, &c) != 3) {
    printf("Input error.");
    return 0;
  }
  if (c * c == a * a + b * b)
    printf("yes");
  else
    printf("no");
  return 0;
}