#include <iostream>

enum { total_marks = 23 };

using std::cin;
using std::cout;

int main() {
  short marks[total_marks] = {0};
  int count = 0;
  while (count < total_marks) {
    cin >> marks[count++];
    if (getchar() == '\n') break;
  }
  for (short x : marks) {
    if (x < 3) x = 0;
    cout << x << ' ';
  }
  return 0;
}