#include <stdio.h>

int main(void) {
  int rect_width = 1280, rect_height = 720;
  int w = 8, h = 8;
  scanf("%d; %d", &w, &h);
  int a = rect_width % w;
  int b = rect_height % h;
  printf("%d %d", a, b);
  return 0;
}