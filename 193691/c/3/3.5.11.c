#include <stdio.h>

int main(void) {
  unsigned int flag, mask;
  scanf("%u%u", &flag, &mask);
  (flag | mask) == flag ? printf("yes") : printf("no");
  return 0;
}
