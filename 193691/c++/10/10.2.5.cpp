#include <iostream>

struct point {
 private:
  int x, y;

 public:
  int get_x() { return x; }
  int get_y() { return y; }
  void get_coords(int& x, int& y) {
    x = this->x;
    y = this->y;
  }
  void set_coords(int x, int y) {
    this->x = x;
    this->y = y;
  }
  static point sum(point& p1, point& p2) {
    point p_sum;
    p_sum.x = p1.x + p2.x;
    p_sum.y = p1.y + p2.y;
    return p_sum;
  }
};

int main(void) {
  point p1, p2;
  int data[4];
  for (int& x : data) std::cin >> x;
  p1.set_coords(data[0], data[1]);
  p2.set_coords(data[2], data[3]);
  point p_sum = point::sum(p1, p2);
  std::cout << p_sum.get_x() << ' ' << p_sum.get_y();
  return 0;
}