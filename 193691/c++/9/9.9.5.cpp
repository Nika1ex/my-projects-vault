#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string msg;
  getline(cin, msg);
  for (int i = 0; i < 4; ++i) putchar(msg[i]);
  __ASSERT_TESTS__
  return 0;
}