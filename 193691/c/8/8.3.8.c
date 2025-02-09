#include <stdio.h>

typedef struct {
  unsigned int id;
  unsigned int width, height, depth;
  double weight;
} BOX;

int main(void) {
  FILE* fp = stdout;
  BOX box;
  scanf("%u;%u;%u;%u;%lf", &box.id, &box.width, &box.height, &box.depth,
        &box.weight);
  fprintf(fp, "box %u: %u x %u x %u", box.id, box.width, box.height, box.depth);
  return 0;
}