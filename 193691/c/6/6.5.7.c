#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *(int *)b - *(int *)a; }

int sum_big2(int a, int b, int c, int d) {
  int data[] = {a, b, c, d};
  qsort(data, sizeof(data) / sizeof(*data), sizeof(int), compare);
  int sum = data[0] + data[1];
  return sum;
}

int main(void) {
  int a, b, c, d;
  scanf("%d%d%d%d", &a, &b, &c, &d);
  int res = sum_big2(a, b, c, d);
  printf("%d", res);
  return 0;
}