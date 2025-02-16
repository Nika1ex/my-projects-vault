#include <iostream>
#define SIZE 100

using std::cin;

double get_mean(const short* d, const size_t len) {
  double sum = 0;
  for (size_t i = 0; i < len; ++i) sum += d[i];
  return sum / len;
}

double get_mean(const int* d, const size_t len) {
  double sum = 0;
  for (size_t i = 0; i < len; ++i) sum += d[i];
  return sum / len;
}

double get_mean(const double* d, const size_t len) {
  double sum = 0;
  for (size_t i = 0; i < len; ++i) sum += d[i];
  return sum / len;
}

int main() {
  short d[SIZE] = {0};
  size_t count = 0;
  while (count < SIZE) {
    cin >> d[count++];
    if (getchar() == EOF) break;
  }
  printf("%.2lf", get_mean(d, count));
  return 0;
}