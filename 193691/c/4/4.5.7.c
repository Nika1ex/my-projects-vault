#include <stdio.h>

int main(void) {
  short a, b;
  short* ptr_a = &a;
  scanf("%hd", &b);
  *ptr_a = b;
  printf("%hd", a);
  __ASSERT_TESTS__
  return 0;
}