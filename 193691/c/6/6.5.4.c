#include <stdio.h>

int sum_ar(const int *ar, size_t len_ar, int (*ptr_is_even)(int)) {
  int sum = 0;
  for (size_t i = 0; i < len_ar; ++i) sum += ptr_is_even(ar[i]) * ar[i];
  return sum;
}

int is_even(int num) { return num % 2 == 0; }

int main(void) {
  int marks[20] = {0};
  int x;
  size_t marks_size = sizeof(marks) / sizeof(*marks);
  size_t count = 0;
  while (scanf("%d", &x) == 1 && count < marks_size) {
    marks[count++] = x;
    if (getchar() == '\n') break;
  }
  int res = sum_ar(marks, count, is_even);
  printf("%d", res);
  return 0;
}