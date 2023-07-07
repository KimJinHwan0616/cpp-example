#include <iostream>
void ss(int, int, int*, int*);


int main() {
    int a=2, b=5;
    int sum=0, sub=0;
    
    ss(a, b, &sum, &sub);
    std::cout << sum << sub << '\n';
}

void ss(int a, int b, int *psum, int *psub) {
    *psum = a+b;
    *psub = a-b;
}