#include <stdio.h>
#define ROWS 3
#define COLS 4

int main(void) {
  int a[ROWS][COLS] = {0};
  int b[ROWS][COLS] = {0};
  int *ptr_a = &a[0][0];
  int *ptr_b = &b[0][0];
  int x;
  for (int i = 0; i < ROWS * COLS && scanf("%d", &x) == 1; ++i) *ptr_a++ = x;
  for (int i = 0; i < ROWS * COLS && scanf("%d", &x) == 1; ++i) *ptr_b++ = x;
  int res[ROWS][COLS] = {0};
  for (int i = 0; i < ROWS; ++i) {
    for (int j = 0; j < COLS; ++j) {
      res[i][j] = a[i][j] + b[i][j];
      if (j != COLS - 1)
        printf("%d ", res[i][j]);
      else
        printf("%d", res[i][j]);
    }
    if (i != ROWS - 1) printf("\n");
  }
  return 0;
}