#include <stdio.h>

int range(int start, int stop, int step) {
  static int k;
  static int init;
  int value;
  if (init == 0) {
    k = start;
    init = 1;
  }
  value = k;
  k += step;
  if (k > stop) k = start;
  return value;
}

int main(void) {
  int start, stop, step;
  scanf("%d %d %d", &start, &stop, &step);
  for (int i = 0; i < 20; ++i) printf("%d ", range(start, stop, step));
  return 0;
}