// Implement a function that uses an inline function to find the sum of two numbers:
#include <iostream>
using namespace std;
inline int sum(int num1, int num2)
{
    return num1 + num2;
}
int main()
{
    int num1, num2;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;
    cout << "Sum of " << num1 << " and " << num2 << " is: " <<sum(num1,num2) << endl;
    return 0;
}