#include <stdio.h>

int main(void) {
  int ar[100];
  int* const ptr_ar = ar;
  int i = 0, flag = 1;
  while (flag) {
    if (scanf("%d", ptr_ar + i) == 1 && *(ptr_ar + i) != 78) {
      printf("%d ", *(ptr_ar + i));
      ++i;
    } else
      flag = 0;
  }
  return 0;
}