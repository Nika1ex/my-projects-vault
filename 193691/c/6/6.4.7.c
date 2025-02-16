#include <stdio.h>
#define SIZE 3

void show_pole(char (*arr)[SIZE]);

int main(void) {
  char pole[SIZE][SIZE] = {0};
  char* ptr_p = &pole[0][0];
  int count = 0;
  int val = 0;
  while (count < SIZE * SIZE && scanf("%d", &val) == 1) {
    *ptr_p = (val == 1) ? 'x' : (val == 2) ? 'o' : val;
    ptr_p++;
    count++;
  }
  show_pole(pole);
  return 0;
}

void show_pole(char (*arr)[SIZE]) {
  for (int i = 0; i < SIZE; ++i) {
    for (int j = 0; j < SIZE; ++j) {
      if (arr[i][j] == 0)
        printf("#");
      else
        printf("%c", arr[i][j]);
      if (j != SIZE - 1) printf(" ");
    }
    printf("\n");
  }
}