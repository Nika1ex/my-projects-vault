#include <stdio.h>
#define SIZE 50

int main(void) {
  char str[SIZE] = "Best   language  \"C\"";
  for (int i = 0; str[i] != '\0'; ++i) {
    if (str[i] == ' ' && str[i + 1] == ' ')
      for (int j = i; str[j] == ' '; ++j) str[j] = '\n';
  }
  for (int i = 0; str[i] != '\0'; ++i) {
    if (str[i] == '\n')
      for (int j = i; str[j] != '\0'; ++j) str[j] = str[j + 1];
  }
  __ASSERT_TESTS__
  return 0;
}