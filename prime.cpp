// Write a program in cpp to check the number is prime or not:
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number to check prime or not: ";
    cin >> num;
    int i = 2;
    while (i <= num - 1)
    {
        if (i % num == 0)
        {
            cout << "number is not prime.";
        }
        else
        {
            i = i + 1;
        }
    }
    cout << "Number is prime.";
    return 0;
}