#include <cstring>
#include <iostream>

using std::cin;
using std::string;

bool check_password(const char* str, const char* sym = "$%!?@#") {
  const char* ptr = strpbrk(str, sym);
  size_t len = strlen(str);
  return ptr && len > 7 ? true : false;
}

int main() {
  string str;
  cin >> str;
  check_password(str.data()) ? puts("yes") : puts("no");
  return 0;
}