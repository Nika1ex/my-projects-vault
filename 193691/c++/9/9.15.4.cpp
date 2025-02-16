#include <iostream>
#define SIZE 10

using std::cin;
using std::cout;
using std::endl;

inline int sum_ar_int(int *ar, size_t len) {
  int sum = 0;
  for (size_t i = 0; i < len; ++i) sum += ar[i];
  return sum;
}

int main() {
  int ar[SIZE];
  for (size_t i = 0; i < SIZE; ++i) cin >> ar[i];
  cout << sum_ar_int(ar, SIZE) << endl;
  return 0;
}