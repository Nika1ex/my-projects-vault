#include <stdio.h>

int main(void) {
  int day;
  if (scanf("%d", &day) != 1) {
    printf("Input error.");
    return 0;
  }
  if (day == 1)
    printf("понедельник");
  else if (day == 2)
    printf("вторник");
  else if (day == 3)
    printf("среда");
  else if (day == 4)
    printf("четверг");
  else if (day == 5)
    printf("пятница");
  else if (day == 6)
    printf("суббота");
  else if (day == 7)
    printf("воскресенье");
  else
    printf("не верный номер дня недели");
  return 0;
}
