#include <iostream>

enum { size_pole = 10 };

int main(void) {
  char pg[size_pole][size_pole] = {0};
  auto is_v = [&pg](int x, int y) {
    for (int i = -1; i <= 1; ++i)
      for (int j = -1; j <= 1; ++j) {
        int xx = x + i, yy = y + j;
        if (xx < 0 || xx >= size_pole || yy < 0 || yy >= size_pole) continue;
        if (pg[xx][yy] == '*') return 0;
      }
    return 1;
  };
  int mines = 0;
  do {
    int i = rand() % size_pole;
    int j = rand() % size_pole;
    if (is_v(i, j)) {
      pg[i][j] = '*';
      mines++;
    }
  } while (mines < 12);
  __ASSERT_TESTS__
  return 0;
}