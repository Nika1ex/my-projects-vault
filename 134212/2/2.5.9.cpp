#include <iostream>
#include <vector>

int main(void) {
  using namespace std;
  vector<char> marks[10];
  marks[0].push_back(3);
  marks[0].push_back(4);
  marks[1].push_back(2);
  marks[2].push_back(5);
  marks[2].push_back(5);
  marks[2].push_back(5);
  marks[3].push_back(2);
  marks[3].push_back(2);
  marks[3].push_back(2);
  marks[3].push_back(2);
  marks[3].push_back(2);
  marks[4].push_back(1);
  marks[4].push_back(3);
  marks[5].push_back(3);
  __assertion_tests(marks);
  return 0;
}