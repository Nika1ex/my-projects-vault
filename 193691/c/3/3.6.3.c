#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int N;
  int a[7];
  srand(time(NULL));
  if (scanf("%d", &N) != 1 || N <= 0 || N >= RAND_MAX) {
    printf("n/a");
    return 0;
  }
  for (int i = 0; i < 7; i++) {
    a[i] = rand() % (N + 1);
    if (i != 6)
      printf("%d ", a[i]);
    else
      printf("%d", a[i]);
  }
  return 0;
}