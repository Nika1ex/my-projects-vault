#include <stdio.h>
#define TOTAL 5

int main(void) {
  int ar_1[TOTAL], ar_2[TOTAL * 2];
  for (int i = 0; i < TOTAL * 2; i++) {
    if (i < TOTAL) {
      scanf("%d", &ar_1[i]);
      ar_2[i] = ar_1[i];
    } else
      ar_2[i] = -1;
  }
  __ASSERT_TESTS__
  return 0;
}