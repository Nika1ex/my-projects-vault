#include <stdio.h>

int main(void) {
  int init, k;
  scanf("%d", &init);
  k = init;
  int* ptr_k = &k;
  *ptr_k += 10;
  __ASSERT_TESTS__
  return 0;
}