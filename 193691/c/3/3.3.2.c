#include <stdio.h>

int main(void) {
  int k, m;
  if (scanf("%d, %d", &k, &m) != 2) {
    printf("Input error.");
    return 0;
  }
  int min = k < m ? k : m;
  printf("%d", min * min);
  return 0;
}