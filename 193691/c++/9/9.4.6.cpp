#include <iostream>
#define max_data_size 20

namespace array_alg {

typedef int (*PTR_FILTER_FUNC)(int);

size_t filter_int(int *ar, size_t len_ar, PTR_FILTER_FUNC func) {
  for (size_t i = 0; i < len_ar; ++i) {
    if (!func(ar[i])) {
      for (size_t j = i; j < len_ar - 1; ++j)
        ar[j] = ar[j + 1];
      --len_ar;
      --i;
    }
  }
  return len_ar;
}

inline namespace filter_func {

int even(int a) { return a % 2 == 0 ? 1 : 0; }

} // namespace filter_func

} // namespace array_alg

int main() {
  int data[max_data_size] = {0};
  size_t len_data = 0;
  while (len_data < max_data_size) {
    std::cin >> data[len_data++];
    if (getchar() == EOF)
      break;
  }
  len_data = array_alg::filter_int(data, len_data, array_alg::even);
  for (size_t i = 0; i < len_data; ++i)
    std::cout << data[i] << ' ';
  return 0;
}