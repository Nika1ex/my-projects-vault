#include <iostream>
#include <memory>

struct object {
    int data;
    std::shared_ptr<object> next;
};

using shared_obj_ptr = std::shared_ptr<object>;

void push_back(shared_obj_ptr& head, shared_obj_ptr& tail, int data)
{
    // добавление в конец нового объекта односвязного списка
}

void pop_front(shared_obj_ptr& head, shared_obj_ptr& tail) {
    // удаление первого объекта из односвязного списка
}

void show(const shared_obj_ptr& head)
{
    // отображение поля data объектов односвязного списка по порядку (от head до tail) в одну строчку через пробел
}

int main(void)
{
    // здесь продолжайте функцию main

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}