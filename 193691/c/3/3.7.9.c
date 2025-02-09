#include <stdio.h>

#define MAX_BUFF_SIZE 1024

int main(void) {
  unsigned int buff_size;
  scanf("%u", &buff_size);
  buff_size > MAX_BUFF_SIZE ? buff_size = MAX_BUFF_SIZE : buff_size;
  printf("%u", buff_size);
  return 0;
}
