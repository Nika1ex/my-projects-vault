#include <stdio.h>

enum calc_types { _perimetr = 1, _square = 2 };

double calc_rect(double width, double height, enum calc_types type) {
  double res = 0;
  switch (type) {
    case _perimetr:
      res = 2 * (width + height);
      break;
    case _square:
      res = width * height;
      break;
  }
  return res;
}

int main(void) {
  enum calc_types type;
  double width, height;
  scanf("%u%lf%lf", &type, &width, &height);
  double res = calc_rect(width, height, type);
  if (res)
    printf("%.1lf", res);
  else
    printf("error");
  return 0;
}