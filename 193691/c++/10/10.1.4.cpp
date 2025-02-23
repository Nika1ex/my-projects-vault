#include <cstring>
#include <iostream>

using std::cin;

struct book {
  char title[200];
  char author[100];
  int price;
  int npages;
  double price_per_page() { return (double)this->price / this->npages; }
};

int main(void) {
  book lib[10];
  int count = 0;
  std::string str;
  while (count < 10 && cin.get() != EOF) {
    getline(cin, str);
    strncpy(lib[count].title, str.data(), sizeof(lib->title) - 1);
    lib[count].title[sizeof(lib->title) - 1] = '\0';
    getline(cin, str);
    strncpy(lib[count].author, str.data(), sizeof(lib->author) - 1);
    lib[count].author[sizeof(lib->author) - 1] = '\0';
    cin >> lib[count].price >> lib[count].npages;
    count++;
  }
  for (int i = 0; i < count; ++i) printf("%.2lf ", lib[i].price_per_page());
  // __ASSERT_TESTS__
  return 0;
}