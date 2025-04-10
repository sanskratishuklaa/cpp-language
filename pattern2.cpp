// write a cpp program to print a simple number pattern using for loop:
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter a number of row: ";
    cin >> row;
    cout << "Enter a number of columns: ";
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << i<<" ";
        }
        cout << endl;
    }
    return 0;
}