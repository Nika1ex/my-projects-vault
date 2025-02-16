#include <stdbool.h>
#include <stdio.h>
#define WORDS_COUNT 20
#define WORD_SIZE 50

typedef int (*FUNC_CORRECT)(const char*);

int is_correct(const char* str) {
  int res = 0;
  for (int i = 0; str[i] != '\0'; ++i)
    if ((str[i] == 'r' || str[i] == 'R') &&
        (str[i + 1] == 'a' || str[i + 1] == 'A'))
      res = 1;
  return res;
}

int get_correct_words(const char (*words)[WORD_SIZE], int count_words,
                      FUNC_CORRECT filter) {
  int res = 0;
  for (int i = 0; i < count_words; ++i) res += filter(words[i]);
  return res;
}

int main(void) {
  char str[WORDS_COUNT][WORD_SIZE];
  int count = 0;
  FUNC_CORRECT filter = is_correct;
  while (count < WORDS_COUNT) {
    scanf("%s", str[count++]);
    if (getchar() == '\n') break;
  }
  int res = get_correct_words(str, count, filter);
  printf("%d", res);
  return 0;
}