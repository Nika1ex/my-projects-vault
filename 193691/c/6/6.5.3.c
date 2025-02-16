#include <stdio.h>
#include <string.h>

void copy_string(char* dst, size_t max_len_dst, const char* src,
                 int (*ptr_check)(const char)) {
  char* ptr_dst = dst;
  const char* ptr_src = src;
  while (*ptr_src != '\0' && max_len_dst > 1) {
    if (ptr_check(*ptr_src)) {
      *ptr_dst++ = *ptr_src;
      max_len_dst--;
    }
    ptr_src++;
  }
  *ptr_dst = '\0';
}

int check(const char ch) {
  int res = 1;
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) res = 0;
  return res;
}

int main(void) {
  char str[100] = {0}, str2[20];
  fgets(str, sizeof(str) - 1, stdin);
  char* ptr_n = strrchr(str, '\n');
  if (ptr_n != NULL) *ptr_n = '\0';
  size_t max_len_dst = sizeof(str2);
  copy_string(str2, max_len_dst, str, check);
  puts(str2);
  return 0;
}