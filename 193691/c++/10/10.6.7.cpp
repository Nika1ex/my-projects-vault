#include <iostream>
#include <memory>

struct object {
 private:
  short data;
  object* next;

 public:
  object(short d = 0) {
    data = d;
    next = nullptr;
  }
  object* get_next() { return next; }
  short get_data() { return data; }
  void set_next(object* ptr) { next = ptr; }
  void set_data(short d) { data = d; }
};

using st_unique_ptr = std::unique_ptr<object>;

void push(st_unique_ptr& top, short data) {
  object* ptr = new object(data);
  ptr->set_next(top.release());
  top.reset(ptr);
}

void clear(object* top) {
  while (top) {
    object* next = top->get_next();
    delete top;
    top = next;
  }
}

int main(void) {
  st_unique_ptr top;
  for (int i = 1; i <= 7; ++i) push(top, i);
  for (object* node = top.get(); node != NULL; node = node->get_next())
    std::cout << node->get_data() << ' ';
  __ASSERT_TESTS__
  clear(top.release());
  return 0;
}