#include <stdio.h>

struct tag_time {
  unsigned char hours;
  unsigned char minutes;
  unsigned char seconds;
};

int main(void) {
  struct tag_time tm1, tm2, tm_sum;
  scanf("%hhu %hhu %hhu", &tm1.hours, &tm1.minutes, &tm1.seconds);
  scanf("%hhu %hhu %hhu", &tm2.hours, &tm2.minutes, &tm2.seconds);
  tm_sum.seconds = (tm1.seconds + tm2.seconds) % 60;
  tm_sum.minutes =
      ((tm1.minutes + tm2.minutes) + (tm1.seconds + tm2.seconds) / 60) % 60;
  tm_sum.hours =
      ((tm1.hours + tm2.hours) +
       (((tm1.minutes + tm2.minutes) + (tm1.seconds + tm2.seconds) / 60) /
        60)) %
      60;
  printf("%02hhu:%02hhu:%02hhu", tm_sum.hours, tm_sum.minutes, tm_sum.seconds);
  __ASSERT_TESTS__
  return 0;
}