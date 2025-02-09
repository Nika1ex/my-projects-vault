#include <iostream>
#define max_marks_size 100
#define max_ar_size 20

namespace array_alg {

typedef int (*PTR_FILTER_FUNC)(int);

size_t add_int(int *src, size_t start, size_t max_len_src, const int *dest,
               size_t len_dest, PTR_FILTER_FUNC func) {
  for (size_t j = 0; j < len_dest && start < max_len_src; ++j)
    if (func(dest[j]))
      src[start++] = dest[j];
  return start;
}

inline namespace filter_func {

int mark_positive(int a) { return a >= 4 ? 1 : 0; }

} // namespace filter_func

} // namespace array_alg

int main() {
  int marks[max_marks_size] = {3, 2, 5, 4, 3};
  int ar[max_ar_size] = {0};
  size_t count = 0, count_marks = 5, start = 0;
  while (count < max_ar_size) {
    std::cin >> ar[count++];
    if (getchar() == '\n')
      break;
  }
  for (int i = 0; i < max_marks_size; ++i) {
    if (marks[i] == 0) {
      start = i;
      break;
    }
  }
  count_marks = array_alg::add_int(marks, start, max_marks_size, ar, count,
                                   array_alg::mark_positive);
  for (size_t i = 0; i < count_marks; ++i)
    std::cout << marks[i] << ' ';
  return 0;
}