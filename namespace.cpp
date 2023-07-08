#include <iostream>

using namespace std;

namespace silla
{
    int year = 935;

    void CentralArea()
    {
        cout << "경상도" << endl;
    }
}

namespace baekjae    
{
    int year = 660;
    void CentralAera()
    {
        cout << "충청도" << endl;
    }
}

using namespace silla;
using baekjae::CentralAera;

int main()
{
    cout << "신라 중심지 : ";
    CentralArea();
    cout << "백제 중심지 : ";
    baekjae::CentralAera();
}