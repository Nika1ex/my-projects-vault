#include <stdarg.h>
#include <stdio.h>
#include <string.h>

typedef struct {
  char fname[100];
  char old;
  char stag;
  int salary;
  double efs;
} PERSON;

void fill_data(PERSON *data, const char *format, ...) {
  va_list arg;
  va_start(arg, format);
  while (*format) {
    const char *ptr = strchr(format, '#');
    if (!ptr) break;
    format = ptr + 1;
    switch (*format) {
      case 'f':
        strcpy(data->fname, va_arg(arg, char *));
        break;
      case 'o':
        data->old = (char)va_arg(arg, int);
        break;
      case 'g':
        data->stag = (char)va_arg(arg, int);
        break;
      case 's':
        data->salary = va_arg(arg, int);
        break;
      case 'e':
        data->efs = va_arg(arg, double);
        break;
    }
  }
  va_end(arg);
}

int main(void) {
  PERSON data = {0};
  fill_data(&data, "#o #e #s #f", 30, 0.81, 100000, "Ivanov");
  return 0;
}