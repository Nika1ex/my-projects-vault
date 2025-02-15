#include <stdio.h>
#define TOTAL 10

int main(void) {
  int digs[TOTAL] = {0};
  size_t count = 0;
  size_t sz_ar = sizeof(digs) / sizeof(*digs);
  int flag = 1;
  while (count < sz_ar && flag) {
    scanf("%d", &digs[count]);
    count++;
    if (getchar() == EOF) flag = 0;
  }
  flag = 1;
  for (size_t i = 0; i < count; ++i) {
    printf("%d ", digs[i]);
    if (digs[i] == 5 && flag) {
      if (count < sz_ar) {
        for (size_t j = count; j > i + 1; --j) digs[j] = digs[j - 1];
        digs[i + 1] = -5;
        count++;
        flag = 0;
      } else if (count == sz_ar && i != sz_ar - 1) {
        for (size_t j = count - 1; j > i + 1; --j) digs[j] = digs[j - 1];
        digs[i + 1] = -5;
        flag = 0;
      }
    }
  }
  return 0;
}