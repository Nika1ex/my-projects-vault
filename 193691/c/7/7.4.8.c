#include <stdio.h>
#include <stdlib.h>
#define TOTAL 10

void* expand_array(short* ptr, size_t* len, short fill) {
  size_t n = *len;
  *len *= 2;
  short* tmp = (short*)realloc(ptr, *len * sizeof(short));
  if (!tmp) {
    fprintf(stderr, "Memory allocation error\n");
    return ptr;
  }
  ptr = tmp;
  for (size_t i = n; i < *len; ++i) *(ptr + i) = fill;
  return ptr;
}

int main(void) {
  short* ptr_d = calloc(TOTAL, sizeof(short));
  size_t len = TOTAL;
  if (ptr_d == NULL) {
    fprintf(stderr, "Memory allocation error\n");
    return 0;
  }
  int count = 0;
  while (count < TOTAL && scanf("%hd", &ptr_d[count]) == 1) {
    count++;
    if (getchar() == '\n') break;
  }
  ptr_d = expand_array(ptr_d, &len, -1);
  for (size_t i = 0; i < len; ++i) {
    printf("%hd", *(ptr_d + i));
    if (i != len - 1) putchar(' ');
  }
  free(ptr_d);
  return 0;
}