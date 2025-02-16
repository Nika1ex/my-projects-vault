#include <stdio.h>
#define MAX_SIZE 20

void reverse(short *arr, int size_arr) {
  short tmp;
  for (int i = 0; i < size_arr / 2; ++i) {
    tmp = arr[i];
    arr[i] = arr[size_arr - 1 - i];
    arr[size_arr - 1 - i] = tmp;
  }
}

void output(short *arr, int size_arr) {
  for (int i = 0; i < size_arr; ++i) {
    printf("%hd", arr[i]);
    if (i != size_arr - 1) printf(" ");
  }
}

int main(void) {
  short digs[MAX_SIZE];
  int count = 0;
  while (count < MAX_SIZE && scanf("%hd", &digs[count]) == 1) {
    count++;
    if (getchar() == '\n') break;
  }
  reverse(digs, count);
  output(digs, count);
  return 0;
}