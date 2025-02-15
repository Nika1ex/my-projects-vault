#include <stdio.h>
#include <string.h>

int main(void) {
  char str[10] = {0};
  fgets(str, sizeof(str) - 1, stdin);
  char *ptr = strrchr(str, '\n');
  if (ptr != NULL) *ptr = '\0';
  char tmp;
  size_t length = strlen(str);
  for (int i = 0; i < 2; ++i) {
    tmp = str[i];
    str[i] = str[length - 2 + i];
    str[length - 2 + i] = tmp;
  }
  puts(str);
  return 0;
}