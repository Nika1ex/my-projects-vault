#include <cstring>
#include <iostream>

using type_sort = enum { sort_asc, sort_desc };

int compare_asc(const void *a, const void *b) {
  return *(const short *)a - *(const short *)b;
}

int compare_desc(const void *a, const void *b) {
  return *(const short *)b - *(const short *)a;
}

int sort(short *ar, size_t len, type_sort type = sort_asc) {
  int count = 0;
  short data[len];
  memmove(data, ar, len * sizeof(short));
  switch (type) {
    case sort_asc:
      qsort(ar, len, sizeof(short), compare_asc);
      break;
    case sort_desc:
      qsort(ar, len, sizeof(short), compare_desc);
      break;
  }
  for (size_t i = 0; i < len; ++i)
    if (ar[i] != data[i]) count++;
  return count;
}