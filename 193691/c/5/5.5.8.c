#include <stdio.h>
#define TOTAL 20

int main(void) {
  float ws[TOTAL] = {0};
  size_t count = 0;
  size_t sz_ar = sizeof(ws) / sizeof(*ws);
  int flag = 1;
  while (count < sz_ar && flag) {
    scanf("%f", &ws[count]);
    count++;
    if (getchar() == EOF) flag = 0;
  }
  size_t pos;
  float tmp;
  for (size_t i = count / 2; i < count - 1; ++i) {
    pos = i;
    for (size_t j = i + 1; j < count; ++j) {
      if (ws[j] > ws[pos]) pos = j;
    }
    if (pos != i) {
      tmp = ws[pos];
      ws[pos] = ws[i];
      ws[i] = tmp;
    }
  }
  for (size_t i = 0; i < count; ++i) printf("%.2f ", ws[i]);
  return 0;
}