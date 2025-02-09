#include <stdio.h>

int main(void) {
  int n;
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("input error");
    return 0;
  }
  for (int i = 0; i < n; i++)
    for (int j = 0; j <= i; j++) {
      printf("*");
      if (j == i) printf("\n");
    }
  return 0;
}