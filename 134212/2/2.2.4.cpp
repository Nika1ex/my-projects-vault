#include <iostream>

int main(void) {
  using namespace std;
  char ar[7] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
  for (int i = 6; i > 1; --i)
    ar[i] = ar[i - 1];
  ar[2] = '#';
  __assertion_tests(ar);
  return 0;
}