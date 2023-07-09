#include <iostream>

template <class T1, class T2> 
class CCC { 
    T1 x;
    T2 y;

public:
    CCC(T1 xx, T2 yy) { x = xx; y = yy; }
    void Print() { std::cout << x << ',' << y << std::endl; }
};

int main() {
    CCC<int, int> c1(10, 20);
    CCC<double, double> c2(3.5, 5.5);
    CCC<char, std::string> c3('I', "Love you");
    CCC<int, char> c4(3, 'B');

    c1.Print();
    c2.Print();
    c3.Print();
    c4.Print();

}