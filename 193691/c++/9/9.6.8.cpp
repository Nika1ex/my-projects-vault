#include <iostream>

enum { matrix_size = 4 };

using std::cin;
using std::cout;

int main() {
  short matrix[matrix_size][matrix_size] = {0};
  bool flag = true;
  for (int i = 0; i < matrix_size && flag; ++i) {
    for (int j = 0; j < matrix_size; ++j) {
      cin >> matrix[i][j];
      if (i == matrix_size - 1) flag &= 0;
      if (getchar() == '\n') {
        flag &= 0;
        break;
      }
    }
  }
  for (int i = 0; i < matrix_size; ++i) {
    for (int j = 0; j < matrix_size; ++j) {
      cout << matrix[i][j];
      if (j != matrix_size - 1) cout << ' ';
    }
    cout << '\n';
  }
  return 0;
}