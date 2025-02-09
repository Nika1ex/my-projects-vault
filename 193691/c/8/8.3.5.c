#include <stdio.h>
#include <string.h>

int main(void) {
  char buff[512];
  FILE *fp = stdin;
  fgets(buff, sizeof(buff), fp);
  const char *delim = " ";
  char *word = strtok(buff, delim);
  int count = 0;
  while (word != NULL) {
    word = strtok(NULL, delim);
    ++count;
  }
  printf("%d", count);
  return 0;
}