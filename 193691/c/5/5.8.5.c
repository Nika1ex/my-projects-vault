#include <stdio.h>
#define COUNTRY 6
#define NAME 30

int main(void) {
  char data[COUNTRY][NAME];
  for (int i = 0; i < COUNTRY; ++i) {
    scanf("%29s", data[i]);
    if (*data[i] == 'G') printf("%s ", data[i]);
  }
  return 0;
}