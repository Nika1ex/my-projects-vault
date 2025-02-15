#include <stdio.h>

int main(void) {
  short var_1;
  int var_2;
  long long var_3;
  char* ptr_1 = (char*)&var_1;
  char* ptr_2 = (char*)&var_2;
  char* ptr_3 = (char*)&var_3;
  size_t size_array = sizeof(var_1) + sizeof(var_2) + sizeof(var_3);
  char array[size_array];
  scanf("%hd, %d, %lld", &var_1, &var_2, &var_3);
  for (size_t i = 0; i < size_array; ++i) {
    if (i < sizeof(var_1))
      array[i] = *ptr_1++;
    else if (i >= sizeof(var_1) && i < sizeof(var_1) + sizeof(var_2))
      array[i] = *ptr_2++;
    else
      array[i] = *ptr_3++;
    printf("%hhu ", array[i]);
  }
  return 0;
}