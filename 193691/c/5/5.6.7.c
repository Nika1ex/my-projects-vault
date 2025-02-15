#include <stdio.h>
#define ROWS 3
#define COLS 5

int main(void) {
  short vls[ROWS][COLS] = {0};
  short *ptr_vls = &vls[0][0];
  short x;
  for (int i = 0; i < ROWS * COLS && scanf("%hd", &x) == 1; ++i) *ptr_vls++ = x;
  double mean[ROWS] = {0};
  for (int i = 0; i < ROWS; ++i) {
    for (int j = 0; j < COLS; ++j) mean[i] += vls[i][j];
    mean[i] /= COLS;
    printf("%.2lf ", mean[i]);
  }
  __ASSERT_TESTS__
  return 0;
}