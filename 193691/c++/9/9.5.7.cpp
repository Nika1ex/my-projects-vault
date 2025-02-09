#include <iostream>

enum { max_things = 20 };

using THING = struct {
  char name[50];
  double weight;
};

int compar(const void* a, const void* b) {
  const THING* A = (const THING*)a;
  const THING* B = (const THING*)b;
  if (A->weight > B->weight)
    return 1;
  else
    return -1;
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