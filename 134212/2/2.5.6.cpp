#include <iostream>
#include <vector>

int main(void) {
  using namespace std;
  vector<short> ar_sh;
  short x;
  while (!feof(stdin)) {
    cin >> x;
    ar_sh.push_back(x);
  }
  ar_sh.insert(ar_sh.begin() + 2, 5);
  ar_sh.pop_back();
  ar_sh.pop_back();
  for (int i = 0; i < ar_sh.size(); ++i)
    cout << ar_sh[i] << ' ';
  return 0;
}