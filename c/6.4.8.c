#include <stdio.h>

#define SIZE 3

int is_win(char (*arr)[SIZE]);

int main(void) {
  char pole[SIZE][SIZE] = {0};
  char* ptr_p = &pole[0][0];
  int count = 0;

  while (count < SIZE * SIZE && scanf("%hhd", ptr_p) == 1) {
    *ptr_p = (*ptr_p == 1) ? 'x' : (*ptr_p == 2) ? 'o' : *ptr_p;
    ptr_p++;
    count++;
  }

  printf("%d", is_win(pole));

  return 0;
}

int is_win(char (*arr)[SIZE]) {
  int flag = 3, sum_rows = 0, sum_columns = 0, sum_main_diagonal = 0,
      sum_secondary_diagonal = 0;

  for (int i = 0, k = SIZE - 1; i < SIZE && flag != 1 && flag != 2; ++i, --k) {
    sum_rows = 0;
    sum_columns = 0;
    for (int j = 0; j < SIZE; ++j) {
      if (arr[i][j] == 0) flag = 0;
      sum_rows += (arr[i][j]);
      sum_columns += (arr[j][i]);
    }
    sum_main_diagonal += (arr[i][i]);
    sum_secondary_diagonal += (arr[k][i]);
    if (sum_rows == SIZE * 'x' || sum_columns == SIZE * 'x' ||
        sum_main_diagonal == SIZE * 'x' || sum_secondary_diagonal == SIZE * 'x')
      flag = 1;
    else if (sum_rows == SIZE * 'o' || sum_columns == SIZE * 'o' ||
             sum_main_diagonal == SIZE * 'o' ||
             sum_secondary_diagonal == SIZE * 'o')
      flag = 2;
  }

  return flag;
}