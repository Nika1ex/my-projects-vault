#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string msg;
  getline(cin, msg);
  size_t length = msg.length();
  for (size_t i = length - 1; i > length - 4; --i) putchar(msg[i]);
  __ASSERT_TESTS__
  return 0;
}