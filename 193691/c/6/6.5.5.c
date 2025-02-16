#include <stdio.h>

int is_odd(int num) { return num % 2 ? 1 : 0; }

int is_positive(int num) { return num >= 0; }

int is_negative(int num) { return num < 0; }

int deflt() { return 1; }

int sum_ar(const int *ar, size_t len_ar, int (*ptr_func)(int)) {
  int sum = 0;
  for (size_t i = 0; i < len_ar; ++i) sum += ptr_func(ar[i]) * ar[i];
  return sum;
}

int main(void) {
  int (*funcs[4])(int) = {is_odd, is_positive, is_negative, deflt};
  int marks[20] = {0};
  int item = 0;
  scanf("%d", &item);
  int x;
  size_t count = 0;
  size_t marks_size = sizeof(marks) / sizeof(*marks);
  while (scanf("%d", &x) == 1 && count < marks_size) {
    marks[count++] = x;
    if (getchar() == '\n') break;
  }
  int sum = 0;
  switch (item) {
    case 1:
      sum = sum_ar(marks, count, funcs[0]);
      break;
    case 2:
      sum = sum_ar(marks, count, funcs[1]);
      break;
    case 3:
      sum = sum_ar(marks, count, funcs[2]);
      break;
    default:
      sum = sum_ar(marks, count, funcs[3]);
      break;
  }
  printf("%d", sum);
  return 0;
}