#include <iostream>

using namespace std;

template <typename T>
void Swap(T& a, T& b);

int main()
{
    int c=2, d=3;
    cout << c << d << endl;

    Swap(c,d);
}

template <typename T>
void Swap(T& a, T& b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}