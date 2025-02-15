#include <stdio.h>

int main(void) {
  double S = 0;
  for (size_t i = 0; i < sizeof(marks) / sizeof(*marks); ++i) S += marks[i];
  S /= sizeof(marks) / sizeof(*marks);
  printf("%.2lf\n", S);
  return 0;
}