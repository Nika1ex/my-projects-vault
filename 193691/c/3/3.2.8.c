#include <stdio.h>

int main(void) {
  int a, b, c;
  if (scanf("%d%d%d", &a, &b, &c) != 3) {
    printf("Input error.");
    return 0;
  }
  if (b * b - 4 * a * c >= 0)
    printf("real roots exist");
  else
    printf("%d", b * b - 4 * a * c);
  return 0;
}
