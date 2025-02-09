#include <stdio.h>

int main(void) {
  int x, y;
  if (scanf("%d; %d", &x, &y) != 2 || x <= 0 || y <= 0) {
    printf("Input error.");
    return 0;
  }
  printf("%s", x == y ? "square" : "rectangle");
  return 0;
}
