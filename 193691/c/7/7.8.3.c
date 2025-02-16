#include <stdarg.h>

enum { name_length = 50, total_links = 50, max_path_station = 100 };

typedef struct tag_station {
  char name[name_length];
  struct tag_station* links[total_links];
  short count_links;
  char fl_reserved;
} STATION;

void set_station_links(STATION* st, int count_links, ...) {
  va_list arg;
  va_start(arg, count_links);
  for (int i = 0; i < count_links; ++i) st->links[i] = va_arg(arg, STATION*);
  va_end(arg);
}

int main(void) {
  STATION st[10] = {
      {"St #1", .count_links = 2, .fl_reserved = 0},
      {"St #2", .count_links = 3, .fl_reserved = 0},
      {"St #3", .count_links = 2, .fl_reserved = 0},
      {"St #4", .count_links = 2, .fl_reserved = 0},
      {"St #5", .count_links = 2, .fl_reserved = 0},
      {"St #6", .count_links = 4, .fl_reserved = 0},
      {"St #7", .count_links = 2, .fl_reserved = 0},
      {"St #8", .count_links = 2, .fl_reserved = 0},
      {"St #9", .count_links = 4, .fl_reserved = 0},
      {"St #10", .count_links = 1, .fl_reserved = 0},
  };
  set_station_links(&st[0], st[0].count_links, &st[1], &st[2]);
  set_station_links(&st[1], st[1].count_links, &st[0], &st[3], &st[4]);
  set_station_links(&st[2], st[2].count_links, &st[0], &st[5]);
  set_station_links(&st[3], st[3].count_links, &st[1], &st[5]);
  set_station_links(&st[4], st[4].count_links, &st[1], &st[7]);
  set_station_links(&st[5], st[5].count_links, &st[2], &st[3], &st[6], &st[8]);
  set_station_links(&st[6], st[6].count_links, &st[5], &st[8]);
  set_station_links(&st[7], st[7].count_links, &st[4], &st[8]);
  set_station_links(&st[8], st[8].count_links, &st[5], &st[6], &st[7], &st[9]);
  set_station_links(&st[9], st[9].count_links, &st[8]);
  __ASSERT_TESTS__
  return 0;
}