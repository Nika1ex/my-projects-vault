#include <iostream>

struct rectangle {
 private:
  int x0, y0, x1, y1;

 public:
  rectangle(int x0 = 0, int y0 = 0, int x1 = 0, int y1 = 0) {
    this->x0 = x0;
    this->y0 = y0;
    this->x1 = x1;
    this->y1 = y1;
  }
  bool is_in_rect(int x, int y) {
    return x >= x0 && x <= x1 && y >= y0 && y <= y1;
  }
  void set_coords(int x0, int y0, int x1, int y1) {
    this->x0 = x0;
    this->y0 = y0;
    this->x1 = x1;
    this->y1 = y1;
  }
  void get_coords(int& x0, int& y0, int& x1, int& y1) {
    x0 = this->x0;
    y0 = this->y0;
    x1 = this->x1;
    y1 = this->y1;
  }
};

int main(void) {
  rectangle* ptr_r = new rectangle(-5, 4, 8, 32);
  int x, y;
  std::cin >> x >> y;
  ptr_r->is_in_rect(x, y) ? puts("yes") : puts("no");
  delete ptr_r;
  return 0;
}