#include <stdio.h>

int main(void) {
  unsigned int a;
  if (scanf("%u", &a) != 1) {
    printf("Input error.");
    return 0;
  }
  if ((a - 3) % 10 == 0)
    printf("yes");
  else
    printf("no");
  return 0;
}
