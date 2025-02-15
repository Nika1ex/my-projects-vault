#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char str[100] = {0};
  fgets(str, sizeof(str) - 1, stdin);
  char* ptr_n = strrchr(str, '\n');
  if (ptr_n != NULL) *ptr_n = '\0';
  int h, w, d;
  const char format[] = "%*[^:]:%d x %d x %d";
  sscanf(str, format, &h, &w, &d);
  __ASSERT_TESTS__
  return 0;
}