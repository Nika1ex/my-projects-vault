#include <cstring>
#include <iostream>
#include <vector>

int main(void) {
  using namespace std;
  vector<char> buffer;
  buffer.reserve(512);
  char str[] = "methods: size; push_back;";
  size_t len = strlen(str);
  for (size_t i = 0; i < len; ++i)
    buffer.push_back(str[i]);
  cout << buffer.size() << ' ' << buffer.capacity();
  return 0;
}