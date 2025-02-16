#include <stdio.h>

typedef struct {
  unsigned old : 7;
  unsigned salary : 20;
  unsigned height : 8;
  unsigned weight : 7;
} PERSON_DATA;

int main(void) {
  PERSON_DATA pd = {.old = 45, .salary = 876043, .height = 186, .weight = 83};
  printf("%zu", sizeof(pd));
  __ASSERT_TESTS__
  return 0;
}