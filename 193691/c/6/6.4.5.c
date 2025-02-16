#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DATA_SIZE 20
#define STR_SIZE 100

int get_data_csv(double* arr, int length, const char* buff);

int main(void) {
  char str[STR_SIZE] = {0};
  double data[DATA_SIZE] = {0};
  int size = sizeof(data) / sizeof(*data);
  fgets(str, sizeof(str) - 1, stdin);
  char* ptr_n = strrchr(str, '\n');
  if (ptr_n != NULL) *ptr_n = '\0';
  size = get_data_csv(data, size, str);
  for (int i = 0; i < size; ++i) {
    printf("%.2lf", data[i]);
    if (i != size - 1) printf(" ");
  }
  return 0;
}

int get_data_csv(double* arr, int length, const char* buff) {
  const char* delim = "csv: ;";
  char str[STR_SIZE] = {0};
  strcpy(str, buff);
  char* num = strtok(str, delim);
  int i = 0;
  while (num != NULL && i < length) {
    arr[i] = atof(num);
    num = strtok(NULL, delim);
    ++i;
  }
  length = i;
  return length;
}