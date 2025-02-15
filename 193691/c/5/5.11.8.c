#include <stdio.h>
#include <string.h>
#define TOTAL 10

int main(void) {
  char str[TOTAL][50], *p_sort[TOTAL];
  double weight[TOTAL];
  int count = 0;
  while (count < TOTAL && fgets(str[count], sizeof(str) - 1, stdin)) {
    char *ptr_n = strrchr(str[count], '\n');
    if (ptr_n != NULL) *ptr_n = '\0';
    p_sort[count] = str[count];
    sscanf(str[count], "%*s %*d; %*d; %lf", &weight[count]);
    count++;
  }
  for (int i = 0; i < count - 1; ++i) {
    int pos = i;
    for (int j = i + 1; j < count; ++j)
      if (weight[j] > weight[pos]) pos = j;
    if (pos != i) {
      double tmp = weight[i];
      weight[i] = weight[pos];
      weight[pos] = tmp;
      char *tmp_str = p_sort[i];
      p_sort[i] = p_sort[pos];
      p_sort[pos] = tmp_str;
    }
  }
  for (int i = 0; i < count; ++i) {
    char *ptr = strchr(p_sort[i], ':');
    if (ptr != NULL) *ptr = '\0';
    printf("%s", p_sort[i]);
    if (i != count - 1) printf(" ");
  }
  return 0;
}