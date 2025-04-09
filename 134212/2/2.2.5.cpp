#include <iostream>

int main(void) {
  using namespace std;
  char str_1[] = "Structures data";
  char str_2[20];
  for (int i = 0; i < sizeof(str_1); ++i)
    str_2[i] = str_1[i];
  __assertion_tests(str_1, str_2);
  return 0;
}