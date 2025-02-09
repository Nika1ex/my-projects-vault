#include <stdio.h>

int main(void) {
  if (global_ptr != NULL) {
    *global_ptr = 10;
  }
  return 0;
}