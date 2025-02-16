#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void strip_str(char* str, char* str2) {
  bool flag;
  for (int i = 0; str[i] != '\0'; ++i) {
    flag = true;
    for (int j = 0; str2[j] != '\0' && flag; ++j) {
      if (str[i] == str2[j]) {
        for (int k = i; str[k] != '\0'; ++k) str[k] = str[k + 1];
        --i;
        flag = false;
      }
    }
  }
}

int main(void) {
  char str[100] = {0}, str2[20] = ".,-!?";
  fgets(str, sizeof(str) - 1, stdin);
  char* ptr_n = strrchr(str, '\n');
  if (ptr_n != NULL) *ptr_n = '\0';
  strip_str(str, str2);
  puts(str);
  return 0;
}