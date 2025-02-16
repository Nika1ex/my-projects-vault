#include <stdio.h>

struct tag_vector {
  short x, y, z;
};

int main(void) {
  struct tag_vector vector;
  scanf("%hd%hd%hd", &vector.x, &vector.y, &vector.z);
  __ASSERT_TESTS__
  return 0;
}