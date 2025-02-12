#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;

int main() {
  int width, height;
  cin >> width >> height;
  string data_str;
  data_str = "Переменная width = " + to_string(width) +
             ", переменная height = " + to_string(height);
  cout << data_str << endl;
  __ASSERT_TESTS__
  return 0;
}