#include <cstring>
#include <iostream>
#define SIZE 100

using std::cin;
using std::cout;
using std::endl;
using std::string;

void set_tag(char* str, size_t max_len, const char* tag = "h1") {
  char new_str[max_len];
  sprintf(new_str, "<%s>%s</%s>", tag, str, tag);
  strcpy(str, new_str);
}

int main() {
  string title, tag;
  getline(cin, title);
  getline(cin, tag);
  char buff[SIZE];
  strcpy(buff, title.data());
  set_tag(buff, SIZE);
  cout << buff << endl;
  strcpy(buff, title.data());
  set_tag(buff, SIZE, tag.data());
  cout << buff << endl;
  return 0;
}