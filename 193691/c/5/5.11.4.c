#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50

int main(void) {
  char str[200] = {0};
  fgets(str, sizeof(str) - 1, stdin);
  char *ptr_n = strrchr(str, '\n');
  if (ptr_n != NULL) *ptr_n = '\0';
  double csv[SIZE] = {0};
  const char *delim = "csv: ;";
  char *num = strtok(str, delim);
  int i = 0;
  while (num != NULL) {
    csv[i] = atof(num);
    num = strtok(NULL, delim);
    ++i;
  }
  __ASSERT_TESTS__
  return 0;
}