#include <iostream>

struct triangle {
 private:
  int a, b, c;

 public:
  triangle() {
    a = 0;
    b = 0;
    c = 0;
  }
  triangle(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
  }
  bool is_triangle() { return a + b > c && a + c > b && b + c > a; }
  void get_lengths(int& a, int& b, int& c) {
    a = this->a;
    b = this->b;
    c = this->c;
  }
  void set_lengths(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
  }
};

int main(void) {
  triangle tr_1;
  triangle tr_2(7, 4, 8);
  __ASSERT_TESTS__
  return 0;
}