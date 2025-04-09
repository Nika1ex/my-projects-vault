#include <iostream>

int main(void) {
  using namespace std;
  char marks[] = {5, 4, 2, 2, 2, 3};
  double m_avr = 0;
  int size_marks = sizeof(marks) / sizeof(*marks);
  for (int i = 0; i < size_marks; ++i)
    m_avr += marks[i];
  m_avr /= size_marks;
  __assertion_tests(marks, m_avr);
  return 0;
}