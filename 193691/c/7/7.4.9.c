#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_ln(char* buffer, size_t max_len) {
  fgets(buffer, max_len - 1, stdin);
  char* ptr_n = strrchr(buffer, '\n');
  if (ptr_n != NULL) *ptr_n = '\0';
}

char* merge_string(const char* str1, const char* str2) {
  size_t len1 = strlen(str1);
  size_t len2 = strlen(str2);
  char* str = (char*)malloc(len1 + len2 + 1);
  memcpy(str, str1, len1);
  memcpy(str + len1, str2, len2 + 1);
  if (!str) {
    fprintf(stderr, "Memory allocation error\n");
    return NULL;
  }
  return str;
}

int main(void) {
  char str_1[200] = {0};
  char str_2[200] = {0};
  get_ln(str_1, sizeof(str_1));
  get_ln(str_2, sizeof(str_2));
  char* str = merge_string(str_1, str_2);
  if (str) {
    puts(str);
    free(str);
  }
  return 0;
}