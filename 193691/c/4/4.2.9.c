#include <stdio.h>

int main(void) {
  int digit, flag = 1, number = 0;
  while (flag == 1) {
    if (scanf("%d", &digit) != 1 || !(digit >= 0 && digit <= 9)) {
      printf("input error");
      return 0;
    } else if (digit) {
      printf("%d", digit);
      number = 1;
    } else if (!digit && number) {
      flag = 0;
    } else {
      printf("%d", digit);
      flag = 0;
    }
  }
  return 0;
}
