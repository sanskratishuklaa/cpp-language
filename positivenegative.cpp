// Write a cpp program to check a number is positive, negative or zero:
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0)
    {
        cout << "Entered number is positive.";
    }
    else if (num < 0)
    {
        cout << "Entered number is negative.";
    }
    else
    {
        cout << "Entered number is zero.";
    }
    return 0;
}