#include <stdio.h>

int is_triangle(int a, int b, int c);

int main(void) {
  int a, b, c, res;
  if (scanf("%d%d%d", &a, &b, &c) != 3) {
    printf("input error!");
    return 0;
  }
  res = is_triangle(a, b, c);
  printf("%d", res);
  return 0;
}

int is_triangle(int a, int b, int c) {
  int res;
  res = a < b + c && b < a + c && c < a + b ? 1 : 0;
  return res;
}