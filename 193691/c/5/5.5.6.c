#include <stdio.h>
#define TOTAL 20

int main(void) {
  short pows[TOTAL] = {0};
  size_t count = 0;
  size_t sz_ar = sizeof(pows) / sizeof(*pows);
  int flag = 1;
  while (count < sz_ar && flag) {
    scanf("%hd", &pows[count]);
    count++;
    if (getchar() == EOF) flag = 0;
  }
  for (size_t i = 0; i < count; ++i) {
    if (pows[i] % 3 == 0) {
      for (size_t j = i; j < count - 1; ++j) pows[j] = pows[j + 1];
      count--;
      i--;
    } else
      printf("%hd ", pows[i]);
  }
  return 0;
}