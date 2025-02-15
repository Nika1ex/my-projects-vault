#include <stdio.h>

int main(void) {
  short ar_rnd[64] = {0};
  for (int i = 0; i < 5; ++i) scanf("%hd", &ar_rnd[i]);
  __ASSERT_TESTS__
  return 0;
}