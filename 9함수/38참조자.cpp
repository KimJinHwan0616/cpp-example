#include <iostream>
using namespace std;

void Swap(int &, int &);

int main(void)
{
	int num1 = 3, num2 = 7;
	cout << "변경 전 num1의 값은 " << num1 << "이며, num2의 값은 " << num2 << "입니다." << endl;
	Swap(num1, num2);
	cout << "변경 후 num1의 값은 " << num1 << "이며, num2의 값은 " << num2 << "입니다." << endl;
	return 0;
}

void Swap(int &x, int &y)    // x,y: 변수 주소값
{
	int temp;
	
	temp = x;    // temp: x 주소값
	x = y;    // x: y 주소값
	y = temp;    // y: temp 주소값
}