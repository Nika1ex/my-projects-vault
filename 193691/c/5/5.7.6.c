#include <stdio.h>
#define SIZE 100

int main(void) {
  char str[SIZE] = "Best string!";
  for (int i = 0; str[i] != '\0'; ++i) {
    if (str[i] == 's')
      for (int j = i; str[j] != '\0'; ++j) str[j] = str[j + 1];
  }
  __ASSERT_TESTS__
  return 0;
}