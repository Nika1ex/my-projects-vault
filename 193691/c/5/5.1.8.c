#include <stdio.h>

int main(void) {
  int digits[5];
  for (int i = 0; i < 5; ++i) {
    scanf("%d", &digits[i]);
    printf("%d ", digits[i]);
  }
  __ASSERT_TESTS__
  return 0;
}