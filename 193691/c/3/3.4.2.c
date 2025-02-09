#include <stdio.h>

int main(void) {
  char symbol;
  if (scanf("%c", &symbol) != 1) {
    printf("Input error.");
    return 0;
  }
  switch (symbol) {
    case 'a':
      symbol = 'A';
      break;
    case 'b':
      symbol = 'B';
      break;
    case 'c':
      symbol = 'C';
      break;
    case 'd':
      symbol = 'D';
      break;
    case 'e':
      symbol = 'E';
      break;
    case 'f':
      symbol = 'F';
      break;
  }
  printf("%c", symbol);
  __ASSERT_TESTS__
  return 0;
}