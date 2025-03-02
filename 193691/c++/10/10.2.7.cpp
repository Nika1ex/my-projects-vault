#include <iostream>

enum { total_points = 128 };

struct tag_point {
  float x, y;
};

int main(void) {
  tag_point ps[total_points];
  time_t t = time(NULL);
  srand(t);
  double mean_x = 0, mean_y = 0;
  for (tag_point& point : ps) {
    point.x = rand() % 201 - 100;
    mean_x += point.x;
    point.y = rand() % 201 - 100;
    mean_y += point.y;
  }
  mean_x /= total_points;
  mean_y /= total_points;
  __ASSERT_TESTS__
  return 0;
}