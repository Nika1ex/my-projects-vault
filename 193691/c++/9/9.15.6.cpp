#include <iostream>

enum { max_size = 20 };

using EVEN = bool (*)(int);

int sum_ar(const int *ar, size_t len_ar, EVEN func) {
  int sum = 0;
  for (int i = 0; i < len_ar; ++i)
    if (func(ar[i])) sum += ar[i];
  return sum;
}

bool even(int a) { return a % 2 == 0 ? 1 : 0; }

int main() {
  int marks[max_size] = {0};
  int x, count = 0;
  while (std::cin >> x) {
    marks[count++] = x;
    if (getchar() == '\n') break;
  }
  std::cout << sum_ar(marks, count, even);
  return 0;
}