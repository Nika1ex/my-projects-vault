#include <stdio.h>
#define SIZE 10

int main(void) {
  int array[SIZE], res = 1;
  for (size_t i = 0; i < sizeof(array) / sizeof(*array); ++i) {
    scanf("%d", &array[i]);
    res = res * (array[i] >= 0) * (array[i] % 2 || array[i] == 0);
    if (getchar() == EOF || res == 0) break;
  }
  printf("%d", res);
  return 0;
}