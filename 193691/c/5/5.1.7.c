#include <stdio.h>

int main(void) {
  double func[28], x;
  scanf("%lf", &x);
  func[6] = x;
  __ASSERT_TESTS__
  return 0;
}