#include "myproject/header.h"

#include <iostream>

namespace myproject
{

    void Test::print() const
    {
        std::cout << name << std::endl;
    }

} // namespace myproject
