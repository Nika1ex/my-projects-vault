#include <stdio.h>

int main(void) {
  int n, number, counter = 0;
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("input error");
    return 0;
  }
  number = n;
  while (number > 0) {
    counter += 1;
    number /= 10;
  }
  number = n;
  for (; counter > 0; counter--) {
    number = n % 10;
    n /= 10;
    printf("%d", number);
  }
  return 0;
}