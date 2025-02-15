#include <stdio.h>

void strip_string(char* str, int max_len) {
  int count = 0;
  while (*str++ != '\0' && count++ < max_len);
  if (count > 1) {
    str -= 2;
    if (*str == '\n') *str = '\0';
  }
}

int main(void) {
  char str[100];
  fgets(str, sizeof(str), stdin);
  strip_string(str, sizeof(str));
  int count = 0;
  for (int i = 0; str[i] != '\0'; ++i)
    if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')) ++count;
  printf("%d", count);
  return 0;
}