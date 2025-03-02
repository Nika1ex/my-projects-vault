#include <iostream>
#include <string>

using un_ch = unsigned char;

struct dtime {
 private:
  un_ch hs, ms, sc;

 public:
  dtime(un_ch hours = 0, un_ch minutes = 0, un_ch seconds = 0) {
    hs = hours;
    ms = minutes;
    sc = seconds;
  }
  std::string get_time() {
    char buff[9];
    sprintf(buff, "%02hhu:%02hhu:%02hhu", hs, ms, sc);
    std::string str{buff};
    return str;
  }
  void set_time(un_ch hours, un_ch minutes, un_ch seconds) {
    hs = hours;
    ms = minutes;
    sc = seconds;
  }
  static dtime sum_time(const dtime& t1, const dtime& t2) {
    dtime tm_sum;
    tm_sum.sc = (t1.sc + t2.sc) % 60;
    tm_sum.ms = ((t1.ms + t2.ms) + (t1.sc + t2.sc) / 60) % 60;
    tm_sum.hs =
        ((t1.hs + t2.hs) + (((t1.ms + t2.ms) + (t1.sc + t2.sc) / 60) / 60)) %
        24;
    return tm_sum;
  }
};

int main(void) {
  dtime tm1, tm2;
  un_ch h1, m1, s1, h2, m2, s2;
  scanf("%hhu%hhu%hhu", &h1, &m1, &s1);
  scanf("%hhu%hhu%hhu", &h2, &m2, &s2);
  tm1.set_time(h1, m1, s1);
  tm2.set_time(h2, m2, s2);
  dtime time_res = dtime::sum_time(tm1, tm2);
  std::cout << time_res.get_time() << std::endl;
  __ASSERT_TESTS__
  return 0;
}