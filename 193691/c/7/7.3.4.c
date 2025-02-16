#include <stdio.h>

int range(void) {
  static int num = 2;
  return num += 3;
}

int main(void) {
  for (int i = 0; i < 7; ++i) {
    printf("%d", range());
    if (i != 6) putchar(' ');
  }
  return 0;
}