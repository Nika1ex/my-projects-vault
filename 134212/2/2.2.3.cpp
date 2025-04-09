#include <iostream>

int main(void) {
  using namespace std;
  int ar[15];
  for (int i = 0; i < 15; ++i)
    ar[i] = -1;
  ar[4] = 100;
  __assertion_tests(ar);
  return 0;
}