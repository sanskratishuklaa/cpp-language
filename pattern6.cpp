// Write a program in cpp to print a pattern like traingle:
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter a no. of rows: \n";
    cin >> row;
    cout << "Enter a no. of columns: \n";
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}