#include <stdio.h>

int main(void) {
  float a[10];
  for (int i = 0; i < 10; i++) scanf("%f;", &a[i]);
  for (int i = 5; i < 10; i++) {
    if (i != 9)
      printf("%.1f ", a[i]);
    else
      printf("%.1f", a[i]);
  }
}