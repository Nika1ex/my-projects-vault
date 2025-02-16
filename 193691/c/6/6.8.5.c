#include <stdarg.h>
#include <stdio.h>

double sumf(const char* format, ...) {
  double sum = 0;
  va_list arg;
  va_start(arg, format);
  for (int i = 0; format[i] != '\0'; ++i) {
    double x = va_arg(arg, double);
    if (format[i] == '+') sum += x;
  }
  va_end(arg);
  return sum;
}

int main(void) {
  double res = sumf("++ + +", 1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
  printf("%.2f", res);
  return 0;
}