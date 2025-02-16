#include <stdbool.h>
#include <stdio.h>

typedef enum {
  _do = 1,
  _re = 2,
  _mi = 3,
  _fa = 4,
  _sol = 5,
  _la = 6,
  _si = 7
} NOTES;

bool get_major(NOTES n) {
  bool res;
  switch (n) {
    case _do:
      res = true;
      break;
    case _mi:
      res = true;
      break;
    case _sol:
      res = true;
      break;
    default:
      res = false;
  }
  return res;
}

int main(void) {
  NOTES n;
  for (int i = 0; i < 5; ++i) {
    scanf("%u", &n);
    if (get_major(n)) printf("%u ", n);
  }
  return 0;
}