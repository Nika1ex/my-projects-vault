#include <stdio.h>

int main(void) {
  unsigned short time_h = 10;
  unsigned short time_m = 33;
  unsigned short time_s = 5;
  unsigned short h, m, s;
  scanf("%hu; %hu; %hu", &h, &m, &s);
  time_h = (time_h + h) % 60 + (time_m + m) / 60;
  time_m = (time_m + m) % 60 + (time_s + s) / 60;
  time_s = (time_s + s) % 60;
  printf("%02d:%02d:%02d", time_h, time_m, time_s);
  return 0;
}