// Take a number input and check the number is divisible by 7 or not:
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number to check divisibility: ";
    cin >> num;
    if (num % 7 == 0)
    {
        cout << "Entered number is divisible by 7.";
    }
    else
    {
        cout << "Entered number is not divisible by 7.";
    }
    return 0;
}