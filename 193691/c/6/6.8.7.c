#include <stdarg.h>
#include <stdio.h>

void ar_scan(double *arr, size_t size_arr, ...) {
  va_list arg;
  va_start(arg, size_arr);
  for (size_t i = 0; i < size_arr; ++i) *va_arg(arg, double *) = arr[i];
  va_end(arg);
}

int main(void) {
  double weights[40] = {1.25, 4.34, -5.43, 0.01, -0.8};
  double w1, w2, w3;
  ar_scan(weights, 3, &w1, &w2, &w3);
  printf("%.2f %.2f %.2f", w1, w2, w3);
  return 0;
}