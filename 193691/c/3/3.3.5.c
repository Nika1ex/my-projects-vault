#include <stdio.h>

int main(void) {
  int width, height;
  if (scanf("%d%d", &width, &height) != 2) {
    printf("Input error.");
    return 0;
  }
  int border = width > height ? width + 8 : height + 8;
  printf("%d", border);
  return 0;
}
