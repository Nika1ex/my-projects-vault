#include <iostream>
#define max_data_size 20

namespace array_alg {

typedef enum { sort_asc, sort_desc } TYPE_SORT;

int compare_asc(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int compare_desc(const void *a, const void *b) { return *(int *)b - *(int *)a; }

void sorted_int(int *ar, size_t len_ar, TYPE_SORT type) {
  switch (type) {
    case (sort_asc):
      qsort(ar, len_ar, sizeof(int), compare_asc);
      break;
    case (sort_desc):
      qsort(ar, len_ar, sizeof(int), compare_desc);
      break;
  }
}
}  // namespace array_alg

int main() {
  int data[max_data_size] = {0};
  size_t len_data = 0;
  while (len_data < max_data_size) {
    std::cin >> data[len_data++];
    if (getchar() == EOF) break;
  }
  array_alg::sorted_int(data, len_data, array_alg::sort_desc);
  for (size_t i = 0; i < len_data; ++i) std::cout << data[i] << ' ';
  return 0;
}