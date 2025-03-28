// write a cpp program to check a number is even or odd:
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Entered number is even.";
    }
    else
    {
        cout << "Entered number is odd.";
    }
    return 0;
}
