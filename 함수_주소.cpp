#include <iostream>
void swap(int *a, int *b);

int main(){
    int a=2, b=5;
    std::cout << a << b << std::endl;
    swap(&a, &b);
    std::cout << a << b << std::endl;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;  
    *a = *b;    
    *b = temp;
    std::cout << *a << *b << std::endl;
}
