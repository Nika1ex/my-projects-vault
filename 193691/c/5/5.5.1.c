#include <stdio.h>

int main(void) {
  short ar[10], marks[5];
  int flag = 1;
  size_t count = 0;
  size_t sz_ar = sizeof(ar) / sizeof(*ar);
  while (count < sz_ar && flag) {
    scanf("%hd", &ar[count]);
    count++;
    if (getchar() == EOF) flag = 0;
  }
  size_t sz_marks = sizeof(marks) / sizeof(*marks);
  for (size_t i = 0, j = count - 1; i < (sz_marks < count ? sz_marks : count);
       ++i, --j) {
    marks[i] = ar[j];
    printf("%d ", marks[i]);
  }
  return 0;
}