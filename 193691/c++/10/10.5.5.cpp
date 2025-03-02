#include <iostream>

using un_sh = unsigned short;

struct box {
  un_sh a, b, c;
  box() { puts("Empty box"); }
  box(un_sh a, un_sh b, un_sh c) {
    this->a = a;
    this->b = b;
    this->c = c;
    printf("Box: %hu, %hu, %hu\n", this->a, this->b, this->c);
  }
};

int main(void) {
  box* ar_box =
      new box[5]{{1, 2, 3}, {6, 2, 1}, {0, 0, 0}, {11, 13, 19}, {23, 5, 7}};
  __ASSERT_TESTS__
  delete[] ar_box;
  return 0;
}