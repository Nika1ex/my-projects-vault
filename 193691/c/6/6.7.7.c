#include <stdio.h>
#include <string.h>
#define SIZE 100

typedef struct MorseCode {
  const char symbol;
  const char* code;
} MorseCode;

void decode(char* decod_str, char* str, MorseCode morse_table[]) {
  const char* delim = " ";
  char* ptr = strtok(str, delim);
  char encod_ch[SIZE][SIZE];
  int i = 0, j = 0, k = 0;
  while (ptr != NULL) {
    strcpy(encod_ch[i++], ptr);
    ptr = strtok(NULL, delim);
  }
  while (k != i) {
    if (strcmp(encod_ch[k], morse_table[j].code) == 0) {
      decod_str[k++] = morse_table[j].symbol;
      j = 0;
    } else
      ++j;
  }
  decod_str[k] = '\0';
}

int main(void) {
  char str[SIZE] = {0};
  fgets(str, sizeof(str) - 1, stdin);
  char* ptr_n = strrchr(str, '\n');
  if (ptr_n != NULL) *ptr_n = '\0';
  char decod_str[SIZE] = {0};
  MorseCode morse_table[] = {
      {'A', ".-"},    {'B', "-..."},  {'C', "-.-."},  {'D', "-.."},
      {'E', "."},     {'F', "..-."},  {'G', "--."},   {'H', "...."},
      {'I', ".."},    {'J', ".---"},  {'K', "-.-"},   {'L', ".-.."},
      {'M', "--"},    {'N', "-."},    {'O', "---"},   {'P', ".--."},
      {'Q', "--.-"},  {'R', ".-."},   {'S', "..."},   {'T', "-"},
      {'U', "..-"},   {'V', "...-"},  {'W', ".--"},   {'X', "-..-"},
      {'Y', "-.--"},  {'Z', "--.."},  {'1', ".----"}, {'2', "..---"},
      {'3', "...--"}, {'4', "....-"}, {'5', "....."}, {'6', "-...."},
      {'7', "--..."}, {'8', "---.."}, {'9', "----."}, {'0', "-----"},
      {' ', "-...-"}};
  decode(decod_str, str, morse_table);
  puts(decod_str);
  return 0;
}