#include <stdio.h>

int main(void) {
  short type = 0;
  double w, h;
  if (scanf("%hd %lf %lf", &type, &w, &h) != 3) {
    printf("Input error.");
    return 0;
  }
  type == 1 ? printf("%.1lf", w * h)
            : (type == 2 ? printf("%.1lf", 2 * (w + h)) : printf("-1"));
  return 0;
}