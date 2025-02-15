#include <stdio.h>
#define SIZE 20

int main(void) {
  double array[SIZE], S = 0;
  int i = 0;
  while (getchar() != EOF && i < SIZE) {
    scanf("%lf", &array[i]);
    S += array[i];
    ++i;
  }
  printf("%.2lf", S / i);
  return 0;
}