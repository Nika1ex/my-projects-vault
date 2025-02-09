#include <math.h>
#include <stdio.h>

int main(void) {
  int m, n, k;
  double s = 0;
  if (scanf("%d%d%d", &m, &n, &k) != 3 || m <= 0 || n <= 0 || k <= 0) {
    printf("input error");
    return 0;
  }
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      for (int t = 1; t <= k; t++) {
        s += (double)pow(j, 2) / (pow(i + t, 3) - t);
      }
    }
  }
  s /= (m + n + k);
  printf("%.4lf", s);
  return 0;
}