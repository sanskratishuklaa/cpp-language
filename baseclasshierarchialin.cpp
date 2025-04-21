// Write a class Base and implement hierarchial inheritance with derived classes Derived1, derived2, derived3:
#include <iostream>
using namespace std;
class Base
{
public:
    void putdata()
    {
        cout << "It is a base class. " << endl;
    }
};
class Derived1 : public Base
{
public:
    void display()
    {
        cout << "base class inside derived1." << endl;
    }
};
class Derived2 : public Base
{
public:
    void message()
    {
        cout << "Base class inside derived2." << endl;
    }
};
class Derived3 : public Base
{
public:
    void printdata()
    {
        cout << "Base class inside derived3." << endl;
    }
};
int main()
{
    Derived1 b1;
    Derived2 b2;
    Derived3 b3;
    b1.display(), b1.putdata();
    b2.message(), b2.putdata();
    b3.printdata(), b3.putdata();
    return 0;
}