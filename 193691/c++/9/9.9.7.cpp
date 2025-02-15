#include <iostream>
#include <string>
#define max_cities 10

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string cities[max_cities];
  size_t count = 0;
  while (count < max_cities) {
    cin >> cities[count++];
    if (getchar() == '\n') break;
  }
  string res;
  for (size_t i = 0; i < count; ++i)
    if (cities[i].length() > 5) res += cities[i] + ' ';
  cout << res << endl;
  __ASSERT_TESTS__
  return 0;
}