#include <stdio.h>
#include <string.h>
#define CITY 6
#define NAME 50

int main(void) {
  char cities[CITY][NAME];
  char res[NAME];
  size_t max_length = 0;
  for (int i = 0; i < CITY; ++i) {
    scanf("%49s", cities[i]);
    if (max_length < strlen(cities[i])) {
      max_length = strlen(cities[i]);
      for (int j = 0; cities[i][j] != '\0'; ++j) res[j] = cities[i][j];
      res[max_length] = '\0';
    }
  }
  puts(res);
  return 0;
}