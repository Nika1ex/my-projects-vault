#include <stdio.h>
#define SIZE 4

void transpose(short (*arr)[SIZE]);
void output(short (*arr)[SIZE]);

int main(void) {
  short matrix[SIZE][SIZE] = {0};
  short* ptr = &matrix[0][0];
  int count = 0;
  while (count < SIZE * SIZE && scanf("%hd", ptr) == 1) {
    ptr++;
    count++;
  }
  transpose(matrix);
  output(matrix);
  return 0;
}

void transpose(short (*arr)[SIZE]) {
  short tmp;
  int k = 0;
  for (int i = 0; i < SIZE; ++i) {
    for (int j = k; j < SIZE; ++j) {
      if (i != j) {
        tmp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = tmp;
      }
    }
    ++k;
  }
}

void output(short (*arr)[SIZE]) {
  for (int i = 0; i < SIZE; ++i) {
    for (int j = 0; j < SIZE; ++j) {
      printf("%d", arr[i][j]);
      if (j != SIZE - 1) printf(" ");
    }
    printf("\n");
  }
}