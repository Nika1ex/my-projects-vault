#include <stdio.h>
#include <string.h>
#define DATA_SIZE 20
#define BUFF_SIZE 100

int to_csv(char* str, double* ar, int length);

int main(void) {
  double data[DATA_SIZE];
  char buff[BUFF_SIZE];
  int count = 0;
  while (count < DATA_SIZE && scanf("%lf", &data[count]) == 1) count++;
  to_csv(buff, data, count);
  puts(buff);
  return 0;
}

int to_csv(char* str, double* ar, int length) {
  int num = 0;
  char* ptr = str;
  strcpy(str, "csv:");
  for (int i = 0; i < length; ++i) {
    if (i < length - 1) {
      sprintf(str, "%s %.2lf;", ptr, ar[i]);
      ptr = str;
    } else
      sprintf(str, "%s %.2lf", ptr, ar[i]);
    ++num;
  }
  return num;
}