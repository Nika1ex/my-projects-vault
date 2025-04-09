#include <iostream>

int main(void) {
  using namespace std;
  int func[17];
  int size_ar = sizeof(func) / sizeof(*func);
  for (int i = 0, x = 4; i < size_ar; ++i, ++x)
    func[i] = 2 * x - 5;
  __assertion_tests(func);
  return 0;
}