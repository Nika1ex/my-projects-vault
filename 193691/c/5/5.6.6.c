#include <stdio.h>
#define ROWS 4
#define COLUMNS 3

int main(void) {
  int ar_2D[ROWS][COLUMNS];
  size_t rows = sizeof(ar_2D) / sizeof(ar_2D[0]);
  size_t columns = sizeof(ar_2D[0]) / sizeof(ar_2D[0][0]);
  for (size_t i = 0; i < rows; ++i)
    for (size_t j = 0; j < columns; ++j) scanf("%d", &ar_2D[i][j]);
  for (size_t i = 0; i < columns; ++i) {
    for (size_t j = 0; j < rows; ++j) {
      if (j != rows - 1)
        printf("%d ", ar_2D[j][i]);
      else
        printf("%d", ar_2D[j][i]);
    }
    if (i != columns - 1) printf("\n");
  }
  __ASSERT_TESTS__
  return 0;
}