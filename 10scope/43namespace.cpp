#include "43namespace.h"
#include <iostream>
#include <string>

using namespace kang;
using kim::display;

int main()
{
    kang::count = 4;
    display = 3.14;
    kim::count = 100;

    std::cout << kang::count << std::endl;
    std::cout << kim::count << std::endl;

    std::cout << display << std::endl;

}