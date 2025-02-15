#include <stdio.h>
#define SIZE_BUFFER 128

int main(void) {
  int buffer[SIZE_BUFFER];
  int flag = 1, tmp;
  size_t count = 0;
  size_t sz_ar = sizeof(buffer) / sizeof(*buffer);
  while (count < sz_ar && flag) {
    scanf("%d", &buffer[count]);
    count++;
    if (getchar() == EOF) flag = 0;
  }
  if (count % 2 == 0) {
    for (size_t i = 0; i < count / 2; ++i) {
      tmp = buffer[i];
      buffer[i] = buffer[count / 2 + i];
      buffer[count / 2 + i] = tmp;
    }
  } else {
    for (size_t i = 0; i < count / 2; ++i) {
      tmp = buffer[i];
      buffer[i] = buffer[count / 2 + 1 + i];
      buffer[count / 2 + 1 + i] = tmp;
    }
  }
  for (size_t i = 0; i < count; ++i) printf("%d ", buffer[i]);
  return 0;
}