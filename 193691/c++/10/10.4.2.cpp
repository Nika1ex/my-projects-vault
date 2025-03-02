#include <cstring>
#include <iostream>

struct thing {
  unsigned long id;
  char name[50];
  unsigned int price;
  double weight;
  thing(const char* name = "", unsigned int price = 0, double weight = 0) {
    static unsigned long count;
    this->id = ++count;
    strncpy(this->name, name, sizeof(this->name) - 1);
    this->name[sizeof(this->name) - 1] = '\0';
    this->price = price;
    this->weight = weight;
  }
};

int main(void) {
  char name[50];
  unsigned int price;
  double weight;
  std::cin >> name >> price >> weight;
  thing* ptr_th = new thing(name, price, weight);
  std::cout << ptr_th->price << std::endl;
  delete ptr_th;
  __ASSERT_TESTS__
  return 0;
}