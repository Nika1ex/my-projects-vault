#include <iostream>

enum { max_size = 20 };

void reverse(short *ar, size_t len) {
  short tmp;
  for (int i = 0; i < len / 2; ++i) {
    tmp = ar[i];
    ar[i] = ar[len - 1 - i];
    ar[len - 1 - i] = tmp;
  }
}

int main() {
  short digs[max_size];
  int count = 0;
  while (count < max_size && std::cin >> digs[count]) {
    count++;
    if (getchar() == '\n') break;
  }
  reverse(digs, count);
  for (int i = 0; i < count; ++i) std::cout << digs[i] << ' ';
  return 0;
}