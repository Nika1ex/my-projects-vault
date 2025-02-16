#include <stdio.h>

int calc_rect(int w, int h, int type);

int main(void) {
  int a, b, t;
  scanf("%d, %d, %d", &a, &b, &t);
  printf("%d", calc_rect(a, b, t));
  return 0;
}

int calc_rect(int w, int h, int type) {
  int res;
  if (type == 1)
    res = w * h;
  else
    res = 2 * (w + h);
  return res;
}