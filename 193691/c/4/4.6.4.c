#include <stdio.h>

int main(void) {
  int var;
  scanf("%d", &var);
  int* ptr_var = &var;
  char* ptr_ch = (char*)ptr_var;
  printf("%hhd", *ptr_ch);
  __ASSERT_TESTS__
  return 0;
}