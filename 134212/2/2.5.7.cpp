#include <iostream>
#include <vector>

int main(void) {
  using namespace std;
  int digit;
  cin >> digit;
  vector<int> divs;
  for (int i = 1; i <= digit; ++i)
    if (digit % i == 0)
      divs.push_back(i);
  for (int i = 0; i < divs.size(); ++i)
    cout << divs[i] << ' ';
  __assertion_tests(divs, digit);
  return 0;
}