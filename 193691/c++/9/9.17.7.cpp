#include <iostream>
#include <string>

int main(void) {
  char str[100];
  auto gl = [&]() {
    std::string line;
    getline(std::cin, line);
    size_t i = 0;
    size_t max_len = sizeof(str);
    for (; i < line.length() && i < max_len - 1; ++i) str[i] = line[i];
    str[i] = '\0';
  };
  gl();
  std::cout << str;
  return 0;
}