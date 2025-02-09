#include <stdio.h>

int main(void) {
  int count;
  scanf("%d", &count);
  char* ptr = (char*)&count;
  for (unsigned int i = 0; i < sizeof(int); ++i) {
    *ptr++ |= 9;
  }
  printf("%d", count);
  return 0;
}