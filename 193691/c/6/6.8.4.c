#include <stdarg.h>
#include <stdio.h>
#include <string.h>

double v_norm2(char *str, ...) {
  char *arr[] = {"vector2", "vector3", "vector4"};
  double norm = 0;
  int count = 0;
  va_list arg;
  va_start(arg, str);
  for (size_t i = 0; i < sizeof(arr) / sizeof(*arr); ++i) {
    if (strcmp(str, arr[i]) == 0) {
      count = i + 2;
      for (int j = 0; j < count; ++j) {
        double x = va_arg(arg, double);
        norm += x * x;
      }
    }
  }
  va_end(arg);
  return norm;
}

int main(void) {
  double res = v_norm2("vector2", 1.0, 2.0);
  printf("%.1lf", res);
  return 0;
}