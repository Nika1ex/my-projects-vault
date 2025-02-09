#include <stdio.h>

int main(void) {
  int n, m, s = 0;
  if (scanf("%d%d", &n, &m) != 2 || n <= 0 || m <= 0) {
    printf("input error");
    return 0;
  }
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= m; j++) {
      if (i + j < 10)
        s += i + j;
      else
        goto loop;
    }
  }
loop:
  printf("%d", s);
  return 0;
}