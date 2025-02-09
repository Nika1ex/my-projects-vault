#include <stdio.h>

int main(void) {
  short a, b, init_a, init_b;
  scanf("%hd, %hd", &a, &b);
  init_a = a;
  init_b = b;
  short* ptr_a = &a;
  short* ptr_b = &b;
  *ptr_a = init_b;
  *ptr_b = init_a;
  __ASSERT_TESTS__
  return 0;
}