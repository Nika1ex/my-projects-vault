#include <stdio.h>

int main(void) {
  int n, m;
  if (scanf("%d %d", &n, &m) != 2 || n >= m) {
    printf("input error");
    return 0;
  }
  for (int i = n; i <= m; i++) {
    if (i % 2 == 0) printf("%d ", i);
  }
  return 0;
}
