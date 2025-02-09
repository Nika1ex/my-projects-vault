#include <stdio.h>

int main(void) {
  int n;
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("input error");
    return 0;
  }
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) printf("%d ", i);
  }
  return 0;
}
