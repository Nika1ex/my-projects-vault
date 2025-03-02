#include <cmath>
#include <iostream>

struct point3D {
 private:
  int x, y, z;

 public:
  point3D() {
    x = 0;
    y = 0;
    z = 0;
  }
  point3D(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
  }
  void get_coords(int& x, int& y, int& z) {
    x = this->x;
    y = this->y;
    z = this->z;
  }
};

struct line3D {
 private:
  point3D start_pt, end_pt;

 public:
  line3D(point3D start_pt, point3D end_pt) {
    this->start_pt = start_pt;
    this->end_pt = end_pt;
  }
  ~line3D() {
    int x0, y0, z0, x1, y1, z1;
    start_pt.get_coords(x0, y0, z0);
    end_pt.get_coords(x1, y1, z1);
    printf("Deleted line: (%d, %d, %d) (%d, %d, %d)\n", x0, y0, z0, x1, y1, z1);
  }
  double length() {
    int x0, y0, z0, x1, y1, z1;
    start_pt.get_coords(x0, y0, z0);
    end_pt.get_coords(x1, y1, z1);
    double L = sqrt(pow(x0 - x1, 2) + pow(y0 - y1, 2) + pow(z0 - z1, 2));
    return L;
  }
  const point3D& get_coords_start() { return start_pt; }
  const point3D& get_coords_end() { return end_pt; }
};

int main(void) {
  point3D start_pt(-5, 100, 45), end_pt(0, 32, -42);
  line3D line(start_pt, end_pt);
  __ASSERT_TESTS__
  return 0;
}