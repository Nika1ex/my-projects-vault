#include <iostream>

struct money {
 private:
  int total_money;

 public:
  money(int volume) { total_money = volume; }
  int get_money() { return total_money; }
  void set_money(int volume) { total_money = volume; }
};

int main(void) {
  money rubs(100);
  std::cout << rubs.get_money() << std::endl;
  __ASSERT_TESTS__
  return 0;
}