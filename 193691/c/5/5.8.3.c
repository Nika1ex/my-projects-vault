#include <stdio.h>

int main(void) {
  char data[5][10];
  size_t data_size = sizeof(data) / sizeof(data[0]);
  for (size_t i = 0; i < data_size; ++i) {
    scanf("%9s", data[i]);
    printf("[%s]\n", data[i]);
  }
  return 0;
}