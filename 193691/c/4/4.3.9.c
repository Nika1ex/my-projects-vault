#include <stdio.h>

int main(void) {
  int m, n, number, revert_number;
  if (scanf("%d%d", &m, &n) != 2 || m >= n || m <= 0 || n <= 0) {
    printf("input error");
    return 0;
  }
  for (int i = m; i <= n; i++) {
    number = i;
    revert_number = 0;
    while (number) {
      revert_number = revert_number * 10 + number % 10;
      number /= 10;
    }
    if (i == revert_number) printf("%d ", i);
  }
  return 0;
}