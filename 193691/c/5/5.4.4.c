#include <stdio.h>
#define SIZE 100

int main(void) {
  const int total = 5;
  int marks[SIZE];
  for (int i = 0; i < total; ++i) scanf("%d", &marks[i]);
  for (int i = total - 1; i >= 0; --i) printf("%d ", marks[i]);
  __ASSERT_TESTS__
  return 0;
}