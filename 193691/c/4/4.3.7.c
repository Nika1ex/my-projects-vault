#include <stdio.h>

int main(void) {
  int n, k;
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("input error");
    return 0;
  }
  k = n - 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n + i; j++) {
      j < k ? printf(" ") : printf("*");
    }
    printf("\n");
    --k;
  }
  return 0;
}