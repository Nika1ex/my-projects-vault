#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

enum { max_st_count = 10, name_length = 50, total_links = 50, max_path_station = 100 };

typedef struct tag_station {
  char name[name_length];
  struct tag_station* links[total_links];
  short count_links;
  char fl_reserved;
} STATION;

typedef struct queue {
  STATION* st[max_st_count];
  int front;
  int rear;
} QUEUE;

STATION st[max_st_count] = {
    {"St #1", .count_links = 2, .fl_reserved = -1},
    {"St #2", .count_links = 3, .fl_reserved = -1},
    {"St #3", .count_links = 2, .fl_reserved = -1},
    {"St #4", .count_links = 2, .fl_reserved = -1},
    {"St #5", .count_links = 2, .fl_reserved = -1},
    {"St #6", .count_links = 4, .fl_reserved = -1},
    {"St #7", .count_links = 2, .fl_reserved = -1},
    {"St #8", .count_links = 2, .fl_reserved = -1},
    {"St #9", .count_links = 4, .fl_reserved = -1},
    {"St #10", .count_links = 1, .fl_reserved = -1},
};

void set_station_links(STATION* st, int count_links, ...);
void show_path(STATION* st);
void find_path(STATION* from, STATION* to, STATION* path[], int* count_st);
QUEUE* create_queue();
void enqueue(QUEUE* q, STATION* st);
bool is_empty(QUEUE* q);
STATION* dequeue(QUEUE* q);

void set_station_links(STATION* st, int count_links, ...) {
  va_list arg;
  va_start(arg, count_links);
  for (int i = 0; i < count_links; ++i) st->links[i] = va_arg(arg, STATION*);
  va_end(arg);
}

void find_path(STATION* from, STATION* to, STATION* path[], int* count_st) {
  for (size_t i = 0; i < sizeof(st) / sizeof(*st); ++i) st[i].fl_reserved = -1;
  QUEUE* q = create_queue();
  from->fl_reserved = 0;
  STATION* current;
  enqueue(q, from);
  while (!is_empty(q)) {
    current = dequeue(q);
    if (current == to) break;
    for (int i = 0; i < current->count_links; ++i) {
      if (current->links[i]->fl_reserved == -1) {
        current->links[i]->fl_reserved = current->fl_reserved + 1;
        enqueue(q, current->links[i]);
      }
    }
  }
  free(q);
  *count_st = to->fl_reserved + 1;
  current = to;
  for (int i = *count_st - 1; i >= 0; --i) {
    path[i] = current;
    for (int j = 0; j < current->count_links; ++j) {
      if (current->links[j]->fl_reserved == current->fl_reserved - 1) {
        current = current->links[j];
        break;
      }
    }
  }
}

QUEUE* create_queue() {
  QUEUE* q = malloc(sizeof(QUEUE));
  q->front = -1;
  q->rear = -1;
  return q;
}

void enqueue(QUEUE* q, STATION* st) {
  if (q->front == -1) q->front = 0;
  q->rear++;
  q->st[q->rear] = st;
}

STATION* dequeue(QUEUE* q) {
  STATION* st;
  st = q->st[q->front];
  q->front++;
  if (q->front > q->rear) q->front = q->rear = -1;
  return st;
}

bool is_empty(QUEUE* q) {
  if (q->rear == -1)
    return true;
  else
    return false;
}

// void show_path(STATION* st) {
//   STATION* path[max_path_station] = {0};
//   int count_st = 0;
//   find_path(&st[0], &st[9], path, &count_st);
//   printf("From [%s] to [%s]: count_st = %hhd\n", st[0].name, st[9].name,
//          count_st);
//   for (int i = 0; i < count_st; ++i) printf("[%s] ", path[i]->name);
// }

int main(void) {
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

  STATION* path[max_path_station] = {0};
  int count_st = 0;
  find_path(&st[0], &st[9], path, &count_st);

  // show_path(st);

  // __ASSERT_TESTS__
  return 0;
}