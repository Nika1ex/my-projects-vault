#include <stdio.h>
#define SIZE 20

int prod_ar(int *ar, int length);

int main(void) {
  int data[SIZE];
  int flag = 1, count = 0;
  while (flag && count < SIZE) {
    scanf("%d", &data[count]);
    count++;
    if (getchar() == EOF) flag = 0;
  }
  int res = prod_ar(data, count);
  printf("%d", res);
  return 0;
}

int prod_ar(int *ar, int length) {
  int prod = 1;
  for (int i = 0; i < length; ++i) prod *= ar[i];
  return prod;
}