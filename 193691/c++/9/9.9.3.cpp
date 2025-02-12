#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string fname, lname;
  cin >> fname >> lname;
  string fio = fname + ", " + lname;
  cout << fio << endl;
  __ASSERT_TESTS__
  return 0;
}