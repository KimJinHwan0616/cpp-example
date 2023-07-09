#include <iostream>

inline int Sqrt(int x) { return x; }

int main()
{
    int result;
    int x = 5;

    std::cout << Sqrt(10) << std::endl;
    std::cout << Sqrt(x) << std::endl;
    std::cout << Sqrt(x+3) << std::endl;
}