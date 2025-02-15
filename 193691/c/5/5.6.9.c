#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define MINES 12

int main(void) {
  srand(time(NULL));
  char pg[SIZE][SIZE] = {0};
  int x, y, flag = 1, mines = MINES;
  while (mines) {
    x = rand() % SIZE;
    y = rand() % SIZE;
    for (int i = -1; i <= 1 && flag; ++i) {
      for (int j = -1; j <= 1 && flag; ++j)
        if (pg[x + i][y + j] == '*') flag = 0;
    }
    if (flag) {
      pg[x][y] = '*';
      --mines;
      flag = 1;
    } else
      flag = 1;
  }
  __assert_verify_pg(pg);
  return 0;
}