#include <stdio.h>
#define MAX_LENGTH 20

size_t to_flat(short* v, size_t max_len_v, short* table[], size_t len,
               size_t count_v, size_t indx_t, size_t indx) {
  if (count_v < max_len_v && indx_t < len) {
    if (table[indx_t][indx]) {
      v[count_v++] = table[indx_t][indx++];
      count_v = to_flat(v, max_len_v, table, len, count_v, indx_t, indx);
    } else if (++indx_t < len) {
      indx = 0;
      v[count_v++] = table[indx_t][indx++];
      count_v = to_flat(v, max_len_v, table, len, count_v, indx_t, indx);
    }
  }
  return count_v;
}

int main(void) {
  short ar_1[] = {-4, 2, 3, 7, 0};
  short ar_2[] = {11, 6, 10, 8, 13, 98, -5, 0};
  short ar_3[] = {-47, 0};
  short ar_4[] = {8, 11, 56, -3, -2, 0};
  short* table[] = {ar_1, ar_4, ar_3, ar_2};
  short flat[MAX_LENGTH];
  size_t cnt =
      to_flat(flat, MAX_LENGTH, table, sizeof(table) / sizeof(*table), 0, 0, 0);
  for (size_t i = 0; i < cnt; ++i) {
    printf("%d", flat[i]);
    if (i != cnt - 1) printf(" ");
  }
  return 0;
}