#include <iostream>
#include <vector>

int main(void) {
  using namespace std;
  vector<char> ar;
  char x;
  while (!feof(stdin)) {
    cin >> x;
    ar.push_back(x);
  }
  cout << ar[1] << ' ' << ar[5];
  return 0;
}