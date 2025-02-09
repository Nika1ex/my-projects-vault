#include <stdio.h>

#define MUL_VAR_NAME(a, b) mul_##a##_##b

int main(void) {
  int x, y;
  if (scanf("%d%d", &x, &y) != 2) {
    printf("Input error");
    return 0;
  }
  int MUL_VAR_NAME(x, y) = x * y;
  printf("%d", MUL_VAR_NAME(x, y));
  __ASSERT_TESTS__
}