#include <iostream>

struct volume {
  int width, height, depth;
  int get_volume() { return this->width * this->height * this->depth; }
};

int main(void) {
  volume data;
  std::cin >> data.width >> data.height >> data.depth;
  int volume = data.get_volume();
  std::cout << volume << std::endl;
  return 0;
}