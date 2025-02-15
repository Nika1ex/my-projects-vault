#include <stdio.h>
#include <string.h>

int main(void) {
  int h, m, s;
  char str[3][4] = {"--:", "--:", "--"};
  char res_str[12] = "";
  scanf("%d%d%d", &h, &m, &s);
  if (h >= 0 && h < 24) sprintf(str[0], "%02d:", h);
  if (m >= 0 && m < 60) sprintf(str[1], "%02d:", m);
  if (s >= 0 && s < 60) sprintf(str[2], "%02d", s);
  strcat(res_str, str[0]);
  strcat(res_str, str[1]);
  strcat(res_str, str[2]);
  puts(res_str);
  return 0;
}