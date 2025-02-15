#include <stdio.h>
#define CITY 6
#define NAME 20

int main(void) {
  char data[CITY][NAME];
  for (int i = 0; i < CITY; ++i) scanf("%19s", data[i]);
  for (int i = CITY - 1; i >= 0; --i) printf("%s ", data[i]);
  return 0;
}