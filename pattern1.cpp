// write a cpp program to print a simple asterisk pattern using for loop:
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter a number of rows: ";
    cin >> row;
    cout << "Enter a number of column: ";
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "*"; // print asterisk.
        }
        cout << endl;
    }
    return 0;
}