#include <stdio.h>
#include <stdlib.h>

struct tag_rub {
  double ratio_usd;
  int rubs;
};

int main(void) {
  struct tag_rub *account_r = (struct tag_rub *)malloc(sizeof(struct tag_rub));
  account_r->ratio_usd = 91.32;
  scanf("%d", &account_r->rubs);
  double res = account_r->rubs / account_r->ratio_usd;
  printf("%.2lf", res);
  __ASSERT_TESTS__
  free(account_r);
  return 0;
}