#include <iostream>

enum { max_length_ar = 20 };
using filter_func = bool (*)(int, int);

int sum_elem(const int* ar, size_t len, filter_func filter) {
  int s = 0;
  for (int i = 1; i < len; ++i)
    if (filter(ar[i - 1], ar[i])) s += ar[i];
  return s;
}

int main(void) {
  int marks[max_length_ar] = {0};
  int count = 0;
  while (count < max_length_ar && std::cin >> marks[count]) {
    count++;
    if (getchar() == '\n') break;
  }
  std::cout << sum_elem(marks, count,
                        [](int a, int b) { return b % 3 == 0 && a % 2 == 0; });
  return 0;
}