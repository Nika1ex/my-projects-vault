#include <stdio.h>

int main(void) {
  unsigned char bits;
  scanf("%hhu", &bits);
  unsigned char mask = 40;
  if ((bits & mask) == mask)
    printf("%hhu", bits);
  else
    printf("-1");
  return 0;
}