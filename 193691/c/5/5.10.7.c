#include <stdio.h>
#include <string.h>
#define CITY 10
#define NAME 50

int main(void) {
  char str[CITY][NAME] = {0};
  char str_res[CITY * (NAME + 1)];
  int flag;
  for (int i = 0; i < CITY; ++i) {
    flag = 1;
    scanf("%49s", str[i]);
    if (i > 0) {
      for (int j = i - 1; j >= 0 && flag; --j)
        if (strcmp(str[i], str[j]) == 0) flag = 0;
    }
    if (flag) {
      strcat(str_res, str[i]);
      if (i != CITY - 1) strcat(str_res, " ");
    }
  }
  puts(str_res);
  return 0;
}