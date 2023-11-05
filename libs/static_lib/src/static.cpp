#include "static.h"

#include <iostream>
#include <utility>

StaticLibraryClass::StaticLibraryClass(std::string str)
    : m_string(std::move(str))
    {
    }

std::string StaticLibraryClass::get_string() const {
    std::cout << "static library get_string" << std::endl;
    return m_string + std::string{"_static_lib_suffix"};
}
