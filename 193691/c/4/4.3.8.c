#include <stdio.h>

int main(void) {
  int a, b, number, ed, des, sot;
  if (scanf("%d%d", &a, &b) != 2 || a > b || a < 100 || a > 999 || b < 100 ||
      b > 999) {
    printf("input error");
    return 0;
  }
  for (int i = a; i <= b; i++) {
    number = i;
    ed = number % 10;
    number /= 10;
    des = number % 10;
    number /= 10;
    sot = number;
    if (ed != des && ed != sot && des != sot) printf("%d ", i);
  }
  return 0;
}