#include <stdio.h>

struct tag_geom {
  char type;
  int x0, y0;
  int x1, y1;
};

int main(void) {
  struct tag_geom geom = {1, 10, 20, 50, 30};
  struct tag_geom *ptr_geom = &geom;
  printf("%hhd %d %d %d %d", ptr_geom->type, ptr_geom->x0, ptr_geom->y0,
         ptr_geom->x1, ptr_geom->y1);
  __ASSERT_TESTS__
  return 0;
}