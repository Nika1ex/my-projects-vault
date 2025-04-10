#include <iostream>
#include <vector>

typedef struct {
  int x, y;
} POINT;

int main(void) {
  using namespace std;
  vector<POINT> path = {{0, 0}, {20, -5}, {30, 10}, {100, 0}, {175, 80}};
  for (int i = 0; i < path.size(); ++i) {
    if (i != path.size() - 1)
      cout << path[i].x << ' ';
    else
      cout << path[i].x << endl;
  }
  for (int i = 0; i < path.size(); ++i) {
    if (i != path.size() - 1)
      cout << path[i].y << ' ';
    else
      cout << path[i].y << endl;
  }
  __assertion_tests(path);
  return 0;
}