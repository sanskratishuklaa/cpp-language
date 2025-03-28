// Write cpp program to print a fibonacci series up to a given number of terms using a for loop:
#include <iostream>
using namespace std;
int main()
{
    int n1 = 0, n2 = 1, n3, num;
    cout << "Enter a number for find the fibonacci series: ";
    cin >> num;
    cout << n1 << endl
         << n2 << endl;
    for (int i = 2; i <= num; i++)
    {
        n3 = n1 + n2;
        cout << n3 << endl;
        n1 = n2;
        n2 = n3;
    }
    return 0;
}