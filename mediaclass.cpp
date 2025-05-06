// Write a program that demostrates polymorphism using a base class media and derived classes Book and DVD:
#include <iostream>
using namespace std;
class Media
{
public:
    virtual void play() = 0;
    virtual void stop() = 0;
};
class Book : public Media
{
public:
    void play() override
    {
        cout << "Book Play." << endl; // Implementation of Play() for book.
    }
    void stop() override
    {
        cout << "Book Stop." << endl; // Implementation of stop() for Book.
    }
};
class DVD : public Media
{
public:
    void play() override
    {
        cout << "DVD play." << endl; // Implementation of play() for DVD.
    }
    void stop() override
    {
        cout << "DVD stop." << endl; // Implementation of stop() for DVD
    }
};
int main()
{
    Book b;
    DVD d;
    b.play();
    b.stop();
    d.play();
    d.stop();
    return 0;
}