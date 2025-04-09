#include <cmath>
#include <iostream>

int main(void) {
  using namespace std;
  int vector3D[3] = {15, 4, -5};
  int norm2 = pow(vector3D[0], 2) + pow(vector3D[1], 2) + pow(vector3D[2], 2);
  cout << norm2;
  __assertion_tests(vector3D, norm2);
  return 0;
}