// write a cpp program to print a pattern like traingle starting with row number:
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter no. of rows: ";
    cin >> row;
    cout << "Enter no. of columns: ";
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i-j+1<<" ";
        }
        cout << endl;
    }
    return 0;
}