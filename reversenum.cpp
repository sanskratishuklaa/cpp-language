// write a program in cpp to reverse a string;
#include <iostream>
using namespace std;
int main()
{
    long n, reverse = 0, remainder = 0;
    cout << "Enter a number: " << endl;
    cin >> n;
    while (n > 0)
    {
        remainder = n % 10;
        n = n / 10;
        reverse = reverse * 10 + remainder;
    }
    cout << "Reversed numbers is: " << reverse << endl;
}