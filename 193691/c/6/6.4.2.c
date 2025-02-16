#include <stdio.h>
#define SIZE 10

int sum_ar(int *ar, int length);

int main(void) {
  int data[SIZE];
  int flag = 1, count = 0;
  while (flag && count < SIZE) {
    scanf("%d", &data[count]);
    count++;
    if (getchar() == '\n') flag = 0;
  }
  int res = sum_ar(data, count);
  printf("%d", res);
  return 0;
}

int sum_ar(int *ar, int length) {
  int sum = 0;
  for (int i = 0; i < length; ++i) sum += ar[i];
  return sum;
}