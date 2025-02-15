#include <stdio.h>
#include <string.h>
#define CITY 6
#define NAME 50

int main(void) {
  char cities[CITY][NAME];
  char res[2][NAME];
  size_t max_length1 = 0;
  size_t max_length2 = 0;
  int max_index1 = 0;
  for (int i = 0; i < CITY; ++i) {
    scanf("%49s", cities[i]);
    if (max_length1 < strlen(cities[i])) {
      max_length1 = strlen(cities[i]);
      max_index1 = i;
      for (int j = 0; cities[i][j] != '\0'; ++j) res[0][j] = cities[i][j];
      res[0][max_length1] = '\0';
    }
  }
  for (int i = 0; i < CITY; ++i) {
    if (i != max_index1) {
      if (max_length2 < strlen(cities[i])) {
        max_length2 = strlen(cities[i]);
        for (int j = 0; cities[i][j] != '\0'; ++j) res[1][j] = cities[i][j];
        res[1][max_length2] = '\0';
      }
    }
  }
  printf("%s %s", res[0], res[1]);
  return 0;
}