using calc_type = enum { calc_perimetr, calc_square };

int get_rect(int a, int b, calc_type type = calc_perimetr) {
  return type == calc_perimetr ? 2 * (a + b) : a * b;
}

double get_rect(double a, double b, calc_type type = calc_perimetr) {
  return type == calc_perimetr ? 2 * (a + b) : a * b;
}