#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  size_t capacity = 20;
  int* lengths = (int*)malloc(sizeof(int) * capacity);
  if (!lengths) {
    fprintf(stderr, "Memory allocation error\n");
    return 0;
  }
  size_t count = 0;
  while (count < capacity) {
    if (scanf("%d", &lengths[count++]) != 1) {
      fprintf(stderr, "Input error\n");
      free(lengths);
      return 0;
    }
    if (getchar() == EOF) break;
  }
  int* ptr_lens = (int*)calloc(capacity, sizeof(int) * capacity);
  if (!ptr_lens) {
    fprintf(stderr, "Memory allocation error\n");
    free(lengths);
    return 0;
  }
  memcpy(ptr_lens, lengths, sizeof(int) * count);
  for (size_t i = 0; i < capacity; ++i) {
    printf("%d", *(ptr_lens + i));
    if (i != capacity - 1) putchar(' ');
  }
  __ASSERT_TESTS__
  free(lengths);
  free(ptr_lens);
  return 0;
}