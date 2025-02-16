#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define URL_SIZE 1024

typedef struct tag_obj {
  char url[URL_SIZE];
  struct tag_obj* next;
} OBJ;

OBJ* push(OBJ* top, const char* url) {
  OBJ* ptr = (OBJ*)malloc(sizeof(OBJ));
  if (!ptr) {
    puts("memory allocation error");
    return 0;
  }
  strcpy(ptr->url, url);
  ptr->next = top;
  return ptr;
}

OBJ* pop(OBJ* top) {
  if (!top) return top;
  OBJ* ptr_next = top->next;
  free(top);
  return ptr_next;
}

int main(void) {
  OBJ* top = NULL;
  char url_arr[][URL_SIZE] = {
      "https://proproprogs.ru/c_base/"
      "c_etapy-translyacii-programmy-v-mashinnyy-kod-standarty",
      "https://proproprogs.ru/c_base/"
      "c_struktura-i-ponimanie-raboty-programmy-hello-world",
      "https://proproprogs.ru/c_base/"
      "c_dvoichnaya-shestnadcaterichnaya-i-vosmerichnaya-sistemy-schisleniya",
      "https://proproprogs.ru/c_base/c_lokalnye-i-globalnye-peremennye",
      "https://proproprogs.ru/c_base/c_perechisleniya-enum-direktiva-typedef"};
  size_t url_arr_size = sizeof(url_arr) / sizeof(*url_arr);
  for (size_t i = 0; i < url_arr_size; ++i) top = push(top, url_arr[i]);
  __ASSERT_TESTS__
  while (top) top = pop(top);
  return 0;
}