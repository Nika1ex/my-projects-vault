#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

int main(void) {
  char str[100] = {0};
  fgets(str, sizeof(str) - 1, stdin);
  char *ptr_n = strrchr(str, '\n');
  if (ptr_n != NULL) *ptr_n = '\0';
  char *ptr = strchr(str, ':');
  const char *delim = ": ,";
  char *mark = strtok(ptr, delim);
  double S = 0;
  int i = 0;
  while (mark != NULL) {
    S += atoi(mark);
    mark = strtok(NULL, delim);
    ++i;
  }
  S /= i;
  printf("%.3lf", S);
  return 0;
}