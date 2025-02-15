#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 21

int main(void) {
  char str[SIZE][SIZE] = {0};
  char str_res[SIZE * SIZE] = {0};
  int flag = 1, count = 0;
  for (int i = 0; i < SIZE && flag; ++i) {
    scanf("%s", str[i]);
    count++;
    if (getchar() == EOF) flag = 0;
  }
  for (int i = 0; i < count; ++i) {
    if (i == 0) {
      strcat(str_res, str[i]);
      strcat(str_res, ": ");
    } else {
      strcat(str_res, str[i]);
      if (i < count - 1) strcat(str_res, ", ");
    }
  }
  puts(str_res);
  return 0;
}