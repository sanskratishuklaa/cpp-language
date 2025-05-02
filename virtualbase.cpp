// Implement a class with name base class use virtual function to call derived class:
#include <iostream>
using namespace std;
class Base
{
public:
    virtual void print()
    {
        cout << "This is a base class." << endl;
    }
};
class Derived : public Base
{
public:
    void print() override
    {
        cout << "This is Derived class." << endl;
    }
};
int main()
{
    Base *b;
    Derived d;
    b=&d;
    b->print();
    return 0;
}
