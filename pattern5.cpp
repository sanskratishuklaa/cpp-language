// write a cpp program to print a pattern of number with increasing:
#include <iostream>
using namespace std;
int main()
{
    int row, col, count = 0;
    cout << "Enter a number of rows: ";
    cin >> row;
    cout << "Enter a number of columns: ";
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            count = count + 1;
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}