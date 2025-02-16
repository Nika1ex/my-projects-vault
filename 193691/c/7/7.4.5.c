#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  size_t capacity = 20;
  double* digits = (double*)malloc(sizeof(double) * capacity);
  if (!digits) {
    fprintf(stderr, "Memory allocation error\n");
    return 0;
  }
  size_t count = 0;
  while (count < capacity) {
    if (scanf("%lf", &digits[count++]) != 1) {
      fprintf(stderr, "Input error\n");
      free(digits);
      return 0;
    }
    if (getchar() == EOF) break;
  }
  double* ptr_d = (double*)malloc(sizeof(double) * count);
  if (!ptr_d) {
    fprintf(stderr, "Memory allocation error\n");
    free(digits);
    return 0;
  }
  memcpy(ptr_d, digits, sizeof(double) * count);
  __ASSERT_TESTS__
  free(digits);
  free(ptr_d);
  return 0;
}