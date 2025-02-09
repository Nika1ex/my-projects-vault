#include <stdio.h>

int main(void) {
  double value;
  scanf("%lf", &value);
  char* ptr = (char*)&value;
  for (unsigned int i = 0; i < sizeof(double); ++i) {
    printf("%d ", *ptr++);
  }
  return 0;
}