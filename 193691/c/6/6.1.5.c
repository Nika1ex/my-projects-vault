#include <stdio.h>

int get_volume(int h, int w, int d);

int main(void) {
  int height, width, depth, res;
  if (scanf("%d%d%d", &height, &width, &depth) != 3) {
    printf("input error");
    return 0;
  }
  res = get_volume(height, width, depth);
  printf("%d", res);
  return 0;
}

int get_volume(int h, int w, int d) {
  int res = h * w * d;
  return res;
}