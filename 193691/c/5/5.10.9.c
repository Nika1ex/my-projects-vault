#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100] = {0};
  fgets(str, sizeof(str) - 1, stdin);
  char* ptr_n = strrchr(str, '\n');
  if (ptr_n != NULL) *ptr_n = '\0';
  int flag = 1;
  int count_at = 0;
  int count_point = 0;
  size_t len = strlen(str);
  for (size_t i = 0; i < len && flag; ++i) {
    if (str[i] == '@' || str[i] == '.' || str[i] == '_' || str[i] == '-' ||
        (str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z')) {
      if (str[i] == '@') {
        count_at++;
        if (i == 0)
          flag = 0;
        else {
          for (size_t j = i + 1; j < len && flag; ++j) {
            if (str[j] == '.') {
              count_point++;
              if (j == i + 1 || j == len - 1) flag = 0;
            }
          }
        }
      }
    } else
      flag = 0;
  }
  if (!count_at || !count_point) flag = 0;
  printf("%d", flag);
  return 0;
}