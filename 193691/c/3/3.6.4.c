#include <stdio.h>
#include <stdlib.h>
// #include <time.h>

int main(void) {
  int a, b;
  int array[10];
  if (scanf("%d%d", &a, &b) != 2 || a >= b) {
    printf("n/a");
    return 0;
  }
  for (int i = 0; i < 10; i++) {
    array[i] = rand() % (b - a + 1) + a;
    if (i != 9)
      printf("%d ", array[i]);
    else
      printf("%d", array[i]);
  }
  return 0;
}