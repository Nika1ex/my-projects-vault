#include <stdio.h>

int main(void) {
  int value;
  char *ar_d = (char *)&value;
  scanf("%d", &value);
  for (size_t i = 0; i < sizeof(value); ++i) printf("%d ", *(ar_d + i));
  __ASSERT_TESTS__
  return 0;
}