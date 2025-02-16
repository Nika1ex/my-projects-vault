#include <stdio.h>

typedef enum { coord_int = 1, coord_double = 2 } TYPE_COORD;

typedef union {
  int coord_i;
  double coord_d;
} COORD;

typedef struct {
  COORD x, y;
  TYPE_COORD type;
} POINT2;

int main(void) {
  POINT2 pt;
  scanf("%d", (int*)&pt.type);
  switch (pt.type) {
    case (coord_int):
      scanf("%d%d", &pt.x.coord_i, &pt.y.coord_i);
      break;
    case (coord_double):
      scanf("%lf%lf", &pt.x.coord_d, &pt.y.coord_d);
      break;
    default:
      printf("input error\n");
      break;
  }
  __ASSERT_TESTS__
  return 0;
}