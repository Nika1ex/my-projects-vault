#include <stdio.h>
#define MAX_RECURSION 4

void recursive(int n) {
  if (n < MAX_RECURSION) recursive(n + 1);
  printf("%d ", n);
}

int main(void) {
  recursive(1);
  return 0;
}