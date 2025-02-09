#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int a;
  bool res;
  scanf("%d", &a);
  res = a % 5 == 0 && printf("100");
  res = a % 5 != 0 && printf("%d", res);
  return 0;
}