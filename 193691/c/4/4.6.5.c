#include <stdio.h>

int main(void) {
  int var;
  scanf("%d", &var);
  int* ptr_var = &var;
  char* ptr_ch = (char*)ptr_var;
  *ptr_ch = 2;
  printf("%d", var);
  __ASSERT_TESTS__
  return 0;
}