#include <stdio.h>

int main(void) {
  int m, n;
  if (scanf("%d%d", &m, &n) != 2) {
    printf("Input error.");
    return 0;
  }
  if (m > n)
    printf("%d %d", n, m);
  else if (n > m)
    printf("%d %d", m, n);
  else
    printf("%d", m);
  return 0;
}
