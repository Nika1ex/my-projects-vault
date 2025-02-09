#include <stdio.h>

int main(void) {
  int n, s = 0;
  do {
    scanf("%d", &n);
    if (n > 0) s += n;
  } while (n != 13);
  printf("%d", s);
  return 0;
}