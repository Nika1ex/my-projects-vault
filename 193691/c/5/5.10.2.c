#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100] = {0};
  fgets(str, sizeof(str) - 1, stdin);
  char *ptr = strrchr(str, '\n');
  if (ptr != NULL) *ptr = '\0';
  printf("[%s]", str);
  return 0;
}