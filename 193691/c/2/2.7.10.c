#include <stdio.h>

int main(void) {
  int rect_width = 640, rect_height = 480;
  int w = 1, h = 1;
  scanf("%d; %d", &w, &h);
  int count_w = rect_width / w;
  int count_h = rect_height / h;
  int res = count_w * count_h;
  printf("%d", res);
  return 0;
}