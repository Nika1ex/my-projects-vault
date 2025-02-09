#include <stdio.h>

int main(void) {
  int rect_width = 640, rect_height = 480;
  int w = 1, h = 1;
  scanf("%d; %d", &w, &h);
  int res = (rect_width % w != 0) * rect_height / h +
            (rect_height % h != 0) * rect_width / w +
            (rect_width % w != 0 && rect_height % h != 0) * 1;
  printf("%d", res);
  return 0;
}