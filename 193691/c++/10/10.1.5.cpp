#include <cmath>
#include <iostream>

struct vector4D {
  double x, y, z, t;
  void read_data(FILE* stream) {
    fscanf(stream, "%lf%*c%lf%*c%lf%*c%lf", &x, &y, &z, &t);
  }
  double length() { return sqrt(x * x + y * y + z * z + t * t); }
};

int main(void) {
  vector4D v1, v2;
  v1.read_data(stdin);
  v2.read_data(stdin);
  printf("%.3lf %.3lf", v1.length(), v2.length());
  __ASSERT_TESTS__
  return 0;
}