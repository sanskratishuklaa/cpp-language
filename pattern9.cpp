// Write a program in cpp to print a pattern like triangle with increasing number:
#include <iostream>
using namespace std;
int main()
{
    int row, col, count = 0;
    cout << "Enter no. of rows: ";
    cin >> row;
    cout << "Enter no. of columns: ";
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << j;
        }
        cout << endl;
    }
    return 0;
}