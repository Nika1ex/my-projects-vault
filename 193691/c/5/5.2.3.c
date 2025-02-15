#include <stdio.h>

int main(void) {
  printf("%zu %zu", sizeof(marks) / sizeof(*marks), sizeof marks);
  return 0;
}