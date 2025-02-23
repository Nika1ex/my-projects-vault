#include <iostream>

enum { total_points = 100 };

struct tag_point_3d {
  int x, y, z;
};

int main(void) {
  tag_point_3d points[total_points];
  size_t total = 0;
  while (total < total_points) {
    if (scanf("%d%d%d", &points[total].x, &points[total].y, &points[total].z) !=
        3) {
      points[total].x = 0;
      points[total].y = 0;
      points[total].z = 0;
      --total;
      break;
    }
    ++total;
  }
  printf("%d %d %d", points[0].x, points[0].y, points[0].z);
  __ASSERT_TESTS__
  return 0;
}