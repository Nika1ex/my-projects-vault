#include <stdio.h>
#include <string.h>
#define SIZE 50

struct tag_fio {
  char firstname[SIZE], otch[SIZE], lastname[SIZE];
};

struct tag_student {
  struct tag_fio fio;
  short old, height, weight;
};

void getline(char* buffer, size_t max_len) {
  fgets(buffer, max_len - 1, stdin);
  char* ptr_n = strrchr(buffer, '\n');
  if (ptr_n != NULL) *ptr_n = '\0';
}

int main(void) {
  char fname[SIZE], otch[SIZE], lname[SIZE];
  short old, height, weight;
  getline(fname, sizeof(fname));
  getline(otch, sizeof(otch));
  getline(lname, sizeof(lname));
  scanf("%hd, %hd, %hd", &old, &height, &weight);
  struct tag_student st = {{}, old, height, weight};
  strcpy(st.fio.firstname, fname);
  strcpy(st.fio.otch, otch);
  strcpy(st.fio.lastname, lname);
  __ASSERT_TESTS__
  return 0;
}