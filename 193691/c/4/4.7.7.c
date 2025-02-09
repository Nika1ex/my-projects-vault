#include <stdio.h>
#define MASK 0b00111101

int main(void) {
  int count;
  scanf("%d", &count);
  char* ptr = (char*)&count;
  for (unsigned int i = 0; i < sizeof(int); ++i) *ptr++ &= MASK;
  printf("%d", count);
  return 0;
}