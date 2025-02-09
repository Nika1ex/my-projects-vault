#include <stdio.h>
#include <stdlib.h>
#define RAND_MAX 32767

int main(void) {
  int a, b;
  double array[10];
  if (scanf("%d%d", &a, &b) != 2 || a >= b) {
    printf("n/a");
    return 0;
  }
  for (int i = 0; i < 10; i++) {
    array[i] = (double)rand() / (double)RAND_MAX * (double)(b - a) + (double)a;
    if (i != 9)
      printf("%.2lf ", array[i]);
    else
      printf("%.2lf", array[i]);
  }
  return 0;
}