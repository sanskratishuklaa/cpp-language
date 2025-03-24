// write a cpp program to find the factorial of a given number using a for loop:
#include <iostream>
using namespace std;
int main()
{
    int num;
    long factorial=1;
    cout << "Enter a number: " << endl;
    cin >> num;
    if (num < 0)
    {
        cout << "Factorial of negative number does not exist" << endl;
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {

            factorial *= i;
        }
        cout << "Factorial of given number " << num << " is: " << factorial << endl;
    }
}