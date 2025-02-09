#include <stdio.h>

int main(void) {
  int n;
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("input error");
    return 0;
  }
  for (int i = 1;; i++) {
    if (i * i < n)
      printf("%d ", i);
    else
      break;
  }
  return 0;
}