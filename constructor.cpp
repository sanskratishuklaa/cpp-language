#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(void);

void printdata()
{
    cout << a << "+" << b << "i" << endl;
}};
Complex::Complex(void)
{
    a = 10;
    b = 0;
}
int main()
{
    Complex c;
    c.printdata();
    return 0;
}