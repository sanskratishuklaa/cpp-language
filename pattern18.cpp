// Write a program in cpp to print a pattern like triangle with numbers:
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. of rows and columns: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
    return 0;
}