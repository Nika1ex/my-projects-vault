#include <stdio.h>

enum menu_item { item_exit = 1, item_c = 2, item_python = 3, item_java = 4 };

int main(void) {
  int item;
  scanf("%d", &item);
  switch (item) {
    case (item_exit):
      printf("Выход");
      break;
    case (item_c):
      printf("Язык Си");
      break;
    case (item_python):
      printf("Язык Python");
      break;
    case (item_java):
      printf("Язык Java");
      break;
    default:
      printf("Не верный пункт меню");
  }
  return 0;
}