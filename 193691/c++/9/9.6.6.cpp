#include <iostream>

using PTR_FUNC = bool (*)(double);

bool any(const double* ar, size_t len, PTR_FUNC filter) {
  bool res = false;
  for (size_t i = 0; i < len; ++i)
    if (filter(ar[i])) res |= 1;
  return res;
}

bool range_out(double x) { return x < -0.5 || x > 0.5 ? 1 : 0; }

int main() {
  double data[] = {0.1, 0.2, 0.3, -0.4, 1.4};
  bool res = any(data, sizeof(data) / sizeof(*data), range_out);
  return 0;
}