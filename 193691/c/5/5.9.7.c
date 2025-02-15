#include <stdio.h>
#include <string.h>
#define EMPLOYEES 7
#define LASTNAME 50

int main(void) {
  char ps[EMPLOYEES][LASTNAME];
  char ps_sort[EMPLOYEES * (LASTNAME + 1)] = "";
  size_t length[EMPLOYEES];
  int pos, tmp;
  int count = 0;
  for (int i = 0; i < EMPLOYEES; ++i) {
    scanf("%49s", ps[i]);
    length[i] = strlen(ps[i]);
    ++count;
  }
  for (int i = 0; i < EMPLOYEES - 1; ++i) {
    pos = i;
    for (int j = i + 1; j < EMPLOYEES; ++j)
      if (length[j] < length[pos]) pos = j;
    if (pos != i) {
      tmp = length[pos];
      length[pos] = length[i];
      length[i] = tmp;
    }
  }
  for (int i = 0; count; ++i) {
    for (int j = 0; j < EMPLOYEES; ++j) {
      if (i != EMPLOYEES - 1 && length[i] != length[i + 1]) {
        if (length[i] == strlen(ps[j])) {
          strcat(ps_sort, ps[j]);
          if (count > 1) strcat(ps_sort, " ");
          --count;
        }
      } else if (i == EMPLOYEES - 1) {
        if (length[i] == strlen(ps[j])) {
          strcat(ps_sort, ps[j]);
          if (count > 1) strcat(ps_sort, " ");
          --count;
        }
      }
    }
  }
  puts(ps_sort);
  __ASSERT_TESTS__
  return 0;
}