#include <stdio.h>

int check(int num) { return num > 0 && num < 6 ? 1 : 0; }

double mean_ar(const int *ar, size_t len_ar, int (*ptr_func)(int)) {
  double sum = 0;
  int count = 0;
  for (size_t i = 0; i < len_ar; ++i)
    if (ptr_func(ar[i])) {
      sum += ar[i];
      ++count;
    }
  return sum / count;
}

int main(void) {
  int marks[20] = {0};
  int x;
  size_t count = 0;
  while (scanf("%d", &x) == 1 && count < 20) {
    marks[count++] = x;
    if (getchar() == '\n') break;
  }
  double res = mean_ar(marks, count, check);
  printf("%.1lf", res);
  return 0;
}