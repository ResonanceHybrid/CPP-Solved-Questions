#include <iostream>
#include <string>

class Book {
protected:
    std::string author;
    float price;

public:
    Book(const std::string& a, float p) : author(a), price(p) {}

    void display() {
        std::cout << "Author: " << author << ", Price: $" << price << std::endl;
    }
};

class Stock {
protected:
    int numBooks;
    std::string category;

public:
    Stock(int n, const std::string& c) : numBooks(n), category(c) {}

    void display() {
        std::cout << "Number of books: " << numBooks << ", Category: " << category << std::endl;
    }
};

class Library : public Book, public Stock {
public:
    Library(const std::string& a, float p, int n, const std::string& c)
        : Book(a, p), Stock(n, c) {}

    void display() {
        std::cout << "Library Information:" << std::endl;
        Book::display();
        Stock::display();
    }
};

int main() {
    Library library("John Doe", 25.99, 100, "Fiction");
    library.display();

    return 0;
}
