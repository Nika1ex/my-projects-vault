#include <iostream>
#include <memory>

struct object {
  int data;
  std::shared_ptr<object> next;
};

using shared_obj_ptr = std::shared_ptr<object>;

void push_back(shared_obj_ptr& head, shared_obj_ptr& tail, int data) {
  shared_obj_ptr node = std::make_shared<object>();
  if (!head) head = node;
  if (tail) tail->next = node;
  node->data = data;
  tail = node;
}

void pop_front(shared_obj_ptr& head, shared_obj_ptr& tail) {
  if (!head) return;
  if (head == tail) {
    head = tail = nullptr;
    return;
  }
  shared_obj_ptr node = head;
  head = node->next;
  node = nullptr;
}

void show(const shared_obj_ptr& head) {
  for (shared_obj_ptr node = head; node != NULL; node = node->next)
    std::cout << node->data << ' ';
}

int main(void) {
  shared_obj_ptr head, tail;
  for (int i = 1; i <= 4; ++i) push_back(head, tail, i);
  show(head);
  __ASSERT_TESTS__
  return 0;
}