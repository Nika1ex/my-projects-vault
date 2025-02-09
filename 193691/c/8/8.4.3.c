#include <stdio.h>
#include <string.h>

enum { max_lines = 10, max_string_len = 200 };

int main(void) {
  char text[max_lines][max_string_len];
  FILE* fp = stdin;
  for (int i = 0; !feof(fp) && i < max_lines; ++i) {
    fgets(text[i], max_string_len, fp);
    char* ptr = strchr(text[i], '\n');
    if (ptr) *ptr = '\0';
    puts(text[i]);
  }
  return 0;
}