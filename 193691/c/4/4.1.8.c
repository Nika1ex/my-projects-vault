#include <stdio.h>

int main(void) {
  int a = 100;
  while (a <= 999) {
    if (a % 47 == 6 || a % 53 == 45) printf("%d ", a);
    a++;
  }
  return 0;
}