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

int main(void) {
  std::unique_ptr<object> top, ptr;
  ptr = std::make_unique<object>();
  top = std::make_unique<object>();
  top->set_next(ptr.get());
  ptr->set_data(1);
  top->set_data(2);
  __ASSERT_TESTS__
  return 0;
}