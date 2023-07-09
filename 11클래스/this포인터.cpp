#include <iostream>

class Book
{
private:
    int current_page_;
    void set_percent();

public:
    Book(const std::string &title, int total_page);

    std::string title_;
    int total_page_;
    double percent_;

    void Move(int page)
    void Open();
    void Read();
    const Book &ThickerBook(const Book&);


};


int main()
{

}

Book::Book()