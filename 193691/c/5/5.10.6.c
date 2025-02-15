#include <stdio.h>
#include <string.h>
#define CITY 10
#define NAME 50

int main(void) {
  char str[CITY][NAME] = {0};
  char str_res[CITY * (NAME + 1)];
  for (int i = 0; i < CITY; ++i) {
    scanf("%s", str[i]);
    if (strcmp(str[i], "") == 0)
      --i;
    else if (strstr(str[i], "на") == NULL) {
      strcat(str_res, str[i]);
      if (i != CITY - 1) strcat(str_res, " ");
    }
  }
  puts(str_res);
  return 0;
}