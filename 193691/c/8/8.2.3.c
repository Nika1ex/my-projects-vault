#include <stdio.h>

int main(void) {
  char byte;
  FILE* fp = stdin;
  while ((byte = fgetc(fp)) != EOF) printf("%hhd:%ld ", byte, ftell(fp));
  return 0;
}