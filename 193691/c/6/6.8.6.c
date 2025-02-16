#include <stdarg.h>
#include <stdio.h>
#define SIZE 5

void ar_fill(double *arr, size_t size_arr, ...) {
  va_list arg;
  va_start(arg, size_arr);
  for (size_t i = 0; i < size_arr; ++i) arr[i] = va_arg(arg, double);
  va_end(arg);
}

int main(void) {
  double weights[SIZE] = {0};
  ar_fill(weights, SIZE, 0.1, 0.2, 0.3, 0.4, 0.5);
  return 0;
}