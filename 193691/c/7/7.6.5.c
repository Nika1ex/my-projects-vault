#include <stdio.h>

int main(void) {
  struct tag_price pr = price_100;
  printf("%s %u %hu %u", pr.name, pr.rubs, pr.kops, pr.foreign_key);
  __ASSERT_TESTS__
  return 0;
}