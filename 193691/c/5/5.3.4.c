#include <stdio.h>

int main(void) {
  char buffer[128];
  char *ptr_ar = buffer;
  size_t size_buff_1 = sizeof(buff_1) / sizeof(*buff_1);
  size_t size_buff_2 = sizeof(buff_2) / sizeof(*buff_2);
  for (size_t i = 0; i < size_buff_1 + size_buff_2; ++i, ++ptr_ar) {
    if (i < size_buff_1) {
      *ptr_ar = buff_1[i];
    } else {
      *ptr_ar = buff_2[i - size_buff_1];
    }
  }
  __ASSERT_TESTS__
  return 0;
}