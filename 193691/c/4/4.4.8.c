#include <stdio.h>

int main(void) {
  int n, i = 2, flag = 1;
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("input error");
    return 0;
  }
  while (flag && i < n) {
    if (n % i == 0) {
      flag = 0;
      printf("no");
    }
    i++;
  }
  if (flag) printf("yes");
  return 0;
}