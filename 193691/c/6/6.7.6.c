#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef const struct MorseCode {
  const char* symbol;
  const char* code;
} MorseCode;

void encode(char* encod_str, const char* str, size_t length,
            MorseCode morse_table[], size_t table_size) {
  for (size_t i = 0; i < length; ++i) {
    bool flag = true;
    for (size_t j = 0; j < table_size && flag; ++j) {
      if (strchr(morse_table[j].symbol, str[i])) {
        strcat(encod_str, morse_table[j].code);
        if (i != length - 1) strcat(encod_str, " ");
        flag = false;
      }
    }
  }
}

int main(void) {
  char str[100] = {0};
  fgets(str, sizeof(str) - 1, stdin);
  char* ptr_n = strrchr(str, '\n');
  if (ptr_n != NULL) *ptr_n = '\0';
  char encod_str[500] = {0};
  MorseCode morse_table[] = {
      {"aA", ".-"},   {"bB", "-..."}, {"cC", "-.-."}, {"dD", "-.."},
      {"eE", "."},    {"fF", "..-."}, {"gG", "--."},  {"hH", "...."},
      {"iI", ".."},   {"jJ", ".---"}, {"kK", "-.-"},  {"lL", ".-.."},
      {"mM", "--"},   {"nN", "-."},   {"oO", "---"},  {"pP", ".--."},
      {"qQ", "--.-"}, {"rR", ".-."},  {"sS", "..."},  {"tT", "-"},
      {"uU", "..-"},  {"vV", "...-"}, {"wW", ".--"},  {"xX", "-..-"},
      {"yY", "-.--"}, {"zZ", "--.."}, {"1", ".----"}, {"2", "..---"},
      {"3", "...--"}, {"4", "....-"}, {"5", "....."}, {"6", "-...."},
      {"7", "--..."}, {"8", "---.."}, {"9", "----."}, {"0", "-----"},
      {" ", "-...-"}};
  size_t length = strlen(str);
  size_t table_size = sizeof(morse_table) / sizeof(*morse_table);
  encode(encod_str, str, length, morse_table, table_size);
  puts(encod_str);
  return 0;
}