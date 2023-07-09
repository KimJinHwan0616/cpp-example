#include <iostream>

using namespace std;

struct Prop     // property:자산
{
    int savings;
    int loan;
};

int CalcProperty(int, int);

int main()
{
    int hong_prop;
    Prop hong = {10000, 4000};

    hong_prop = CalcProperty(hong.savings, hong.loan);      // ★

    cout << "재산: " << hong.savings << "대출: " << hong.loan << "총합: " << hong_prop << endl;

}

int CalcProperty(int s, int l)
{
    return s-l;
}