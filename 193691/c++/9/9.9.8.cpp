#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string str;
  cin >> str;
  size_t length = str.length();
  for (size_t i = 0; i < length; ++i) {
    if (str[i] == '-' && str[i + 1] == '-') {
      for (size_t j = i + 1; j < length; ++j) str[j] = str[j + 1];
      --i;
      --length;
    }
  }
  str.resize(length);
  cout << str << endl;
  return 0;
}