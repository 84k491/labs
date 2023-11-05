#include "lib_user.h"

#include <iostream>

LibUser::LibUser()
    : dlib(2)
    , slib("static_lib_string")
{
}

void LibUser::action() const {
    std::cout << "some action" << std::endl;
    std::cout << "dynamic lib output: " << dlib.get_value() << std::endl;
    std::cout << "static lib output: " << slib.get_string() << std::endl;
}
