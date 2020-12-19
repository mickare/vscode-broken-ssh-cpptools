#include "myproject/header.h"
#include <cstdlib>
#include <iostream>

int main(int argc, char const *argv[])
{
    std::string test = getenv ("ENV_TEST");
    std::cout << "ENV_TEST = " << test << std::endl;

    myproject::Test a{"Hello World!"};
    a.print();
    return 0;
}
