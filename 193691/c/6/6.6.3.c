#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double norm(int a, int b) {
  int x, N = 100;
  double sum = 0;
  for (int i = 0; i < N; ++i) {
    x = rand() % (a - b + 1) + a;
    sum += x;
  }
  return (double)sum / N;
}

int main(void) {
  srand(time(NULL));
  double y = norm(-2, 10);
  __ASSERT_TESTS__
  return 0;
}