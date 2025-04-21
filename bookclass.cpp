// Implement a class book with a parameterized constructor to initialize book details:
#include <iostream>
using namespace std;
class Book
{
private:
    string bookName;
    int price;
    string authorName;
    long pages;
    string edition;

public:
    Book(string b, int p, string a, long pg, string e)
    {
        bookName = b;
        price = p;
        authorName = a;
        pages = pg;
        edition = e;
    }
    void display()
    {
        cout << "Bookname: " << bookName << endl;
        cout << "Price: " << price << endl;
        cout << "Author Name: " << authorName << endl;
        cout << "Total Pages: " << pages << endl;
        cout << "Edition: " << edition << endl;
    }
};
int main()
{
    Book b("Object Oriented Programming with C++", 599, "E.Balaguruswamy", 1487, "second edition");
    b.display();
    return 0;
}