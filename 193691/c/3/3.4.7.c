#include "stdio.h"

int main(void) {
  unsigned int a;
  if (scanf("%u", &a) != 1 || a < 1000 || a > 9999) {
    printf("n/a");
    return 0;
  }
  if (a / 1000 == 3)
    printf("yes");
  else
    printf("no");
  return 0;
}
