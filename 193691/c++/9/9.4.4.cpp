#include <iostream>

namespace math {
int ar_compare(const short *a1, size_t len_a1, const short *a2, size_t len_a2) {
  int flag = 1;
  if (len_a1 != len_a2) flag = 0;
  for (size_t i = 0; i < len_a1 && flag; ++i)
    if (a1[i] != a2[i])
      flag = 0;
  return flag;
}
} // namespace math

int main() {
  short ar1[] = {1, 2, 3, 4, 5};
  short ar2[] = {1, 2, 5, 3, 4};
  int res = math::ar_compare(ar1, sizeof(ar1) / sizeof(*ar1), ar2,
                             sizeof(ar2) / sizeof(*ar2));
  __ASSERT_TESTS__
  return 0;
}