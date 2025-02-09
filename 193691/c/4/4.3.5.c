#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, m, a = 1, b = 1000;
  if (scanf("%d", &x) != 1 || x < a || x > b) {
    printf("input error");
    return 0;
  }
  do {
    m = rand() % (b - a + 1) + a;

    if (m < x) a = m;
    if (m > x) b = m;
  } while (m != x);
  printf("%d", m);
  return 0;
}