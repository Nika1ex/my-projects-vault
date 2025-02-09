#include <stdio.h>

int main(void) {
  unsigned int flags, mask;
  scanf("%u%u", &flags, &mask);
  (flags & mask) != 0 ? printf("yes") : printf("no");
  return 0;
}
