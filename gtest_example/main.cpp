#include "list.h"

#include <iostream>

int main()
{
    CustomLinkedList list;
    list.push_back("World");
    list.push_back("!");
    list.push_front("Hello");
    while (list.size() > 0) {
        std::cout << list.pop_front().value_or("") << std::endl;
    }
    return 0;
}
