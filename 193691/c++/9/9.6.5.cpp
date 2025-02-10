#include <iostream>

using PTR_FUNC = bool (*)(int);

bool all(const int* ar, size_t len, PTR_FUNC filter) {
  bool res = true;
  for (size_t i = 0; i < len; ++i)
    if (!filter(ar[i])) res &= 0;
  return res;
}

bool positive(int x) { return x > 0 ? 1 : 0; }

int main() {
  int data[] = {2, 3, 1, -10, 15};
  bool res = all(data, sizeof(data) / sizeof(*data), positive);
  return 0;
}