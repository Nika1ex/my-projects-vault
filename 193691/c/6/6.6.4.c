#include <math.h>
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

double reley(double x1, double x2) { return sqrt(x1 * x1 + x2 * x2); }

int main(void) {
  srand(time(NULL));
  double y = reley(norm(0, 5), norm(0, 5));
  __ASSERT_TESTS__
  return 0;
}