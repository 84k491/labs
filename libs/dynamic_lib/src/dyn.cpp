#include "dyn.h"

#include <iostream>

DynamicLibClass::DynamicLibClass(int value)
        : m_value(value)
    {
    }

int DynamicLibClass::get_value() const
{
    std::cout << "dynamic lib get_value. multiplying by 3" << std::endl;
    return m_value * 3;
}
