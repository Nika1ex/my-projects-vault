#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int match_ab(const char a, const char b) {
  int res;
  if ((a >= '0' && a <= '9') || (b >= '0' && b <= '9')) {
    if (abs(a - b) < 10)
      res = a < b ? 1 : 0;
    else
      res = a >= '0' && a <= '9' ? 1 : 0;
  } else
    res = a < b ? 1 : 0;
  return res;
}

void sort_string(char* str, size_t max_len,
                 int (*ptr_func)(const char, const char)) {
  char tmp;
  size_t pos;
  for (size_t i = 0; i < max_len - 1; ++i) {
    pos = i;
    for (size_t j = i + 1; str[j] != '\0'; ++j)
      if (!ptr_func(str[pos], str[j])) pos = j;
    if (pos != i) {
      tmp = str[i];
      str[i] = str[pos];
      str[pos] = tmp;
    }
  }
}

int main(void) {
  char str[100] = {0};
  fgets(str, sizeof(str) - 1, stdin);
  char* ptr_n = strrchr(str, '\n');
  if (ptr_n != NULL) *ptr_n = '\0';
  size_t max_len = sizeof(str);
  sort_string(str, max_len, match_ab);
  puts(str);
  return 0;
}