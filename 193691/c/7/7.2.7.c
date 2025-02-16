#include <stdio.h>

int main(void) {
  int n, m;
  if (scanf("%d%d", &n, &m) == 2 && n > 0 && m > 0) {
    int sum = 0;
    for (int i = 0; i <= n; ++i) {
      for (int j = 0; j <= m; ++j) {
        if (i + j < 20)
          sum += i + j;
        else
          goto loop;
      }
    }
  loop:
    printf("%d", sum);
  }
  return 0;
}