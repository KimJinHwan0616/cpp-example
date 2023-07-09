#include <iostream>
#include <string>

struct Book {
    std::string title;
    std::string author;
    int price;
};

void Display(const Book&);

int main() {
    Book web_book = {"HTML", "홍길동", 28000};
    Display(web_book);
}

void Display(const Book& bk)
{
    std::cout << bk.title << std::endl;
    std::cout << bk.author << std::endl;
    std::cout << bk.price << std::endl;
}