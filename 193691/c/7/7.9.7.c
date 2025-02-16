#include <stdio.h>

typedef enum { param_int, param_double } TYPE_PARAM;

typedef union {
  int data_i;
  double data_d;
} DATA;

DATA sum_ar(DATA arr[], size_t size_arr, TYPE_PARAM type) {
  DATA sum;
  switch (type) {
    case (param_int):
      sum.data_i = 0;
      for (size_t i = 0; i < size_arr; ++i) sum.data_i += arr[i].data_i;
      break;
    case (param_double):
      sum.data_d = 0;
      for (size_t i = 0; i < size_arr; ++i) sum.data_d += arr[i].data_d;
      break;
  }
  return sum;
}

int main(void) {
  DATA arr_i[] = {{1}, {2}, {3}, {4}, {5}};
  DATA arr_d[] = {{1.1}, {2.2}, {3.3}, {4.4}, {5.5}};
  size_t size_arr_i = sizeof(arr_i) / sizeof(*arr_i);
  size_t size_arr_d = sizeof(arr_d) / sizeof(*arr_d);
  DATA res_1 = sum_ar(arr_i, size_arr_i, param_int);
  DATA res_2 = sum_ar(arr_d, size_arr_d, param_double);
  return 0;
}