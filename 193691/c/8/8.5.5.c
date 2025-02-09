#include <stdio.h>

int main(void) {
  short data[10] = {0};
  FILE* fp = stdin;
  int count = 0;
  while (fread(&data[count], sizeof(short), 1, fp) == 1 && count < 10) count++;
  for (int i = 0; i < count; ++i) printf("%hd ", data[i]);
  return 0;
}