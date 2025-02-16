#include <stdio.h>

typedef struct {
  int x;
  int y;
} POINT;

typedef struct {
  double mean_x;
  double mean_y;
} DATA;

DATA get_means(POINT points[], size_t count) {
  DATA means = {0};
  for (size_t i = 0; i < count; ++i) {
    means.mean_x += points[i].x;
    means.mean_y += points[i].y;
  }
  means.mean_x /= count;
  means.mean_y /= count;
  return means;
}

int main(void) {
  POINT points[20];
  size_t count = 0;
  while (count < 20) {
    scanf("%d%d", &points[count].x, &points[count].y);
    count++;
    if (getchar() == EOF) break;
  }
  DATA means = get_means(points, count);
  printf("%.2lf %.2lf\n", means.mean_x, means.mean_y);
  return 0;
}