#include <stdio.h>

int main(void) {
  char buff[512];
  int w, h;
  FILE* fp = stdout;
  scanf("%d%d", &w, &h);
  sprintf(buff, "rectangle: %d; %d", w, h);
  fputs(buff, fp);
  return 0;
}