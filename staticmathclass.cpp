// Implement a class Math with a static function members for basic arithmetic operation:
#include <iostream>
using namespace std;
class Math
{
public:
    static int add(int a, int b)
    {
        return a + b;
    }
    static int sub(int a, int b)
    {
        return a - b;
    }
    static float division(float a, float b)
    {
        return a / b;
    }
    static double multiply(int a, int b)
    {
        return a * b;
    }
};
int main()
{
    int a,b;
    cout<<"Enter two numbers for arithmetic operation:"<<endl;
    cin>>a>>b;
    cout << "addition is: " << Math::add(a,b)<< endl;
    cout << "subtraction is: " << Math::sub(a,b) << endl;
    cout << "Division is: " << Math::division(a,b) << endl;
    cout << "Multiplication is: " << Math::multiply(a,b) << endl;
    return 0;
}