#include <iostream>

class Dog{
private:
    int age;

public:
    Dog(int a);
    ~Dog();

    int getAge() const;
    void setAge(int a);
    void view() { std::cout << "나는 view"; }
};

Dog::Dog(int a)
{
    age = a;
    std::cout << this << std::endl;
}

Dog::~Dog()
{
    std::cout << "소멸";
}

int Dog::getAge() const
{
    return age;
}

void Dog::setAge(int a)
{
    age = a;
}

