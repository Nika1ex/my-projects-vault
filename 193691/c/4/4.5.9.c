#include <stdio.h>

int main(void) {
  short a, b;
  scanf("%hd, %hd", &a, &b);
  short *ptr_a = &a, *ptr_b = &b;
  short res = *ptr_a * *ptr_b;
  printf("%hd", res);
  __ASSERT_TESTS__
  return 0;
}