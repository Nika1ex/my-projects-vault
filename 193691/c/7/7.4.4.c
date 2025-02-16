#include <stdio.h>
#include <stdlib.h>

int main(void) {
  const short arr[] = {-4, 3, 0, 100};
  short *const data =
      (short *)malloc(sizeof(short) * sizeof(arr) / sizeof(*arr));
  if (!data) {
    fprintf(stderr, "Memory allocation error\n");
    return 0;
  }
  for (size_t i = 0; i < sizeof(arr) / sizeof(*arr); ++i)
    *(data + i) = *(arr + i);
  __ASSERT_TESTS__
  free(data);
  return 0;
}