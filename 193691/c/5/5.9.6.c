#include <stdio.h>
#include <string.h>
#define EMPLOYEES 7
#define LASTNAME 50

int main(void) {
  char ps[EMPLOYEES][LASTNAME];
  char ps_res[EMPLOYEES * (LASTNAME + 1)];
  char *ptr = ps_res;
  size_t length = 0;
  int count = 0;
  for (int i = 0; i < EMPLOYEES; ++i) {
    scanf("%49s", ps[i]);
    length = strlen(ps[i]);
    if (length % 2 == 0) {
      ++count;
      if (count > 1) *ptr++ = ' ';
      for (size_t j = 0; j < length; ++j) *ptr++ = ps[i][j];
    }
  }
  *ptr = '\0';
  puts(ps_res);
  __ASSERT_TESTS__
  return 0;
}