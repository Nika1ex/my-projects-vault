#include <iostream>

int main(void) {
  using namespace std;
  int ar[] = {5, 6, 2, -1, 9, 4};
  int bytes_ar = sizeof(ar);
  int size_ar = sizeof(ar) / sizeof(*ar);
  __assertion_tests(bytes_ar, size_ar);
  return 0;
}