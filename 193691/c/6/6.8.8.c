#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

size_t get_data_csv(double *data, size_t data_size, char *str) {
  const char *delim = "csv: ;";
  char line[100] = {0};
  strcpy(line, str);
  char *num = strtok(line, delim);
  size_t i = 0;
  while (num != NULL && i < data_size) {
    data[i++] = atof(num);
    num = strtok(NULL, delim);
  }
  return i;
}

int main(void) {
  char str[100] = {0};
  fgets(str, sizeof(str) - 1, stdin);
  char *ptr_n = strrchr(str, '\n');
  if (ptr_n != NULL) *ptr_n = '\0';
  double data[SIZE] = {0};
  size_t data_size = sizeof(data) / sizeof(*data);
  size_t count = get_data_csv(data, data_size, str);
  for (size_t i = 0; i < count; ++i) {
    printf("%.2lf", data[i]);
    if (i != count - 1) printf(" ");
  }
  return 0;
}