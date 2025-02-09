#include <stdio.h>

#define MAX_WIDTH 1280
#define GET_WIDTH(W) W <= MAX_WIDTH ? W : MAX_WIDTH

int main(void) {
  int width;
  scanf("%d", &width);
  width = GET_WIDTH(width);
  printf("width = %d", width);
  __ASSERT_TESTS__
  return 0;
}