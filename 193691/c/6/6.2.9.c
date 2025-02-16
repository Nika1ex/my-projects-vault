#include <stdio.h>

double get_qm(double qm_1, int m, int x);

int main(void) {
  int x, m = 1;
  double qm, qm_1;
  while (scanf("%d", &x) == 1) {
    qm = get_qm(qm_1, m++, x);
    qm_1 = qm;
    if (getchar() == '\n') break;
  }
  printf("%.3lf", qm);
  return 0;
}

double get_qm(double qm_1, int m, int x) {
  return (m - 1.0) / m * qm_1 + (1.0 / m) * x;
}