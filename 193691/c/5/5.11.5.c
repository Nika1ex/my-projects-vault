#include <stdio.h>
#include <string.h>
#define TOTAL 10

int main(void) {
  char str[TOTAL][50];
  int count = 0;
  while (count < TOTAL && fgets(str[count], sizeof(str) - 1, stdin)) {
    char *ptr_n = strrchr(str[count], '\n');
    if (ptr_n != NULL) *ptr_n = '\0';
    count++;
  }
  const char *price = "12300";
  for (int i = 0; i < count; ++i) {
    if (strstr(str[i], price)) {
      for (int j = i; j < count - 1; ++j) strcpy(str[j], str[j + 1]);
      count--;
      i--;
    }
  }
  char *ptr;
  for (int i = 0; i < count; ++i) {
    ptr = strchr(str[i], ':');
    if (ptr != NULL) *ptr = '\0';
    printf("%s", str[i]);
    if (i != count - 1) printf(" ");
  }
  return 0;
}