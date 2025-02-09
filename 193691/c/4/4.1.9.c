#include <math.h>
#include <stdio.h>

int main(void) {
  int a, b, c, n = 1, flag = 1;
  ;
  if (scanf("%d", &a) != 1) {
    printf("input error");
    return 0;
  }
  c = a;
  while (a / 10) {
    n += 1;
    a /= 10;
  }
  while (c > 9 && flag) {
    a = c / pow(10, n - 1);
    b = c % 10;
    c = (c - a * pow(10, n - 1)) / 10;
    if (a == b) {
      n -= 2;
    } else
      flag = 0;
  }
  if (flag == 1)
    printf("yes");
  else
    printf("no");
  return 0;
}