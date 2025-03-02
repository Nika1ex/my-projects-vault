#include <iostream>

struct vector {
  int x, y, z;
  ~vector() { printf("Deleted vector: %d, %d, %d\n", x, y, z); }
};

int main(void) {
  int x, y, z;
  std::cin >> x >> y >> z;
  vector* v = new vector{x, y, z};
  delete v;
  return 0;
}