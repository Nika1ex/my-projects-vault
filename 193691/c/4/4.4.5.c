#include <stdio.h>

int main(void) {
  int n, i = 2;
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("input error");
    return 0;
  }
  do {
    if (n % i == 0) {
      printf("%d ", i);
      n /= i;
    } else
      i++;
  } while (n != 1);
  return 0;
}