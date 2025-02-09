#include <stdio.h>

int main(void) {
  FILE *fp = fopen("test.dat", "r");
  if (!fp) return 2;
  fclose(fp);
  return 0;
}