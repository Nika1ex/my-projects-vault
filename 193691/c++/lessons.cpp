#include <iostream>

using THING = struct {
  char name[50];
  unsigned int weight;
};

int compar(const void* a, const void* b) {
  return ((const THING*)b)->weight - ((const THING*)a)->weight;
}

int main() {
  THING things[] = {{"карандаш", 20},  {"зеркальце", 100}, {"зонт", 500},
                    {"рубашка", 300},  {"брюки", 1000},    {"бумага", 200},
                    {"молоток", 600},  {"пила", 400},      {"удочка", 1200},
                    {"расческа", 40},  {"котелок", 820},   {"палатка", 5240},
                    {"брезент", 2130}, {"спички", 10}};
  size_t things_size = sizeof(things) / sizeof(*things), index[things_size],
         count = 0;
  unsigned int max_weight;
  std::cin >> max_weight;
  max_weight *= 1000;
  qsort(things, things_size, sizeof(THING), compar);
  for (size_t i = 0; i < things_size; ++i)
    if (things[i].weight <= max_weight) {
      max_weight -= things[i].weight;
      index[count++] = i;
    }
  for (size_t i = 0; i < count; ++i) std::cout << things[index[i]].name << ' ';
  return 0;
}