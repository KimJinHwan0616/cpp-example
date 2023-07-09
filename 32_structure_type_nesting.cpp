#include <iostream>
#include <string>

using namespace std;

struct Name
{
    string first;
    string last;
};

struct Freinds
{
    Name fisrt_name;    // 구조체 변수
    string address;
    string job;
};

int main()
{
    Freinds hong = 
    {
        { "길동", "홍" }, "서울시 강남구 역삼동", "학생"
    };

    cout << hong.address << endl << endl;
    cout << hong.fisrt_name.last << hong.fisrt_name.first << "에게, " << endl;
}