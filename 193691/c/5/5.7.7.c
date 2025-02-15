#include <stdio.h>
#define SIZE 50

int main(void) {
  char str[SIZE] = "best string!";
  const char* str_add = "The ";
  int length_str = 0;
  int length_str_add = 0;
  for (int i = 0; str[i] != '\0'; ++i) length_str++;
  for (int i = 0; str_add[i] != '\0'; ++i) length_str_add++;
  for (int i = length_str; i >= 0; --i) str[i + length_str_add] = str[i];
  for (int i = 0; i < length_str_add; ++i) str[i] = str_add[i];
  __ASSERT_TESTS__
  return 0;
}