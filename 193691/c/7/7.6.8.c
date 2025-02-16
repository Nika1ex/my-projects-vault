#include <stdio.h>

struct tag_point_3d {
  int x, y, z;
};

enum points_count { total_points = 100 };

int main(void) {
  struct tag_point_3d points[total_points] = {{0}};
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
  printf("%d %d %d", points[total].x, points[total].y, points[total].z);
  __ASSERT_TESTS__
  return 0;
}