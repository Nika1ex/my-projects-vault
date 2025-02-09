#include <stdio.h>

int main(void) {
  int n, m, a;
  if (scanf("%d %d", &n, &m) != 2 || n >= m) {
    printf("input error!");
    return 0;
  }
  a = n;
  while (a >= n && a <= m) {
    if (a % 3 == 0) printf("%d ", a);
    a++;
  }
  return 0;
}
