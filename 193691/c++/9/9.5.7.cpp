#include <iostream>

enum { max_things = 20 };

using THING = struct {
  char name[50];
  double weight;
};

int compar(const void* a, const void* b) {
  return ((const THING*)a)->weight - ((const THING*)b)->weight;
}

int main() {
  THING th[max_things];
  int count = 0;
  while (count < max_things) {
    std::cin >> th[count].name >> th[count].weight;
    count++;
    if (getchar() == EOF) break;
  }
  qsort(th, count, sizeof(THING), compar);
  for (int i = 0; i < count; ++i) std::cout << th[i].name << ' ';
  return 0;
}