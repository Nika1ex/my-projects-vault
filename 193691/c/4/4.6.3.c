#include <stdio.h>

int main(void) {
  short a, b;
  scanf("%hd, %hd", &a, &b);
  short *ptr_a = &a, *ptr_b = &b;
  void *ptr;
  ptr = ptr_a;
  ptr_a = ptr_b;
  ptr_b = ptr;
  printf("%hd %hd", *ptr_a, *ptr_b);
  __ASSERT_TESTS__
  return 0;
}