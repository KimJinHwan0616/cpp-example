#include <iostream>
using std::cout;

class Dog {
private:
    int age;
    
public:
    Dog() { age = 1; }
    int getAge();
    void setAge(int a);
};

int Dog::getAge() {
    return age;
}
void Dog::setAge(int a) {
    age = a;
}

int main() {
    Dog happy, *pd;
    pd = &happy;

    happy.setAge(3);
    cout << happy.getAge();
    pd->setAge(5);
    cout << pd->getAge();
    // coco.age;
}