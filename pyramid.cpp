#include <iostream>
using namespace std;
int main()
{
    int i, j, row, col;
    cout << "Enter a number of row and col: ";
    cin >> row >> col;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}