#include <stdarg.h>
#include <stdio.h>

double mean(int total, ...) {
  double s = 0;
  va_list arg;
  va_start(arg, total);
  for (int i = 0; i < total; ++i) s += va_arg(arg, int);
  va_end(arg);
  return s / total;
}

int main(void) {
  double res = mean(7, 5, -10, 11, 0, 12, 4, 2);
  printf("%.2lf", res);
  return 0;
}