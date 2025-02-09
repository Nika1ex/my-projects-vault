#include <iostream>

using FIO_STR = char[50];

using FIO = struct {
  FIO_STR first;
  FIO_STR otch;
  FIO_STR last;
};

int main() {
  FIO fio;
  std::cin >> fio.first >> fio.otch >> fio.last;
  __ASSERT_TESTS__
  return 0;
}