#include <stdio.h>

int main(void) {
  int value;
  scanf("%d", &value);
  short* ptr = (short*)&value;
  for (unsigned int i = 0; i < sizeof(short); ++i) {
    (*ptr++)++;
  }
  printf("%d", value);
  return 0;
}
