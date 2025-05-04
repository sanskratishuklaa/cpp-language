// write a program to transpose a 3x3 matrix stored in a constant array.use control structures to swap elements and print the results:
#include <iostream>
using namespace std;
int main()
{
    int matrix[2][2], transpose[2][2], i, j;
    cout << "Enter matrix element: " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "matrix element: " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << matrix[i] [j]<<" ";
        }
        cout << endl;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    cout << "transpose element: " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << transpose[i] [j]<<" ";
        }
        cout << endl;
    }
    return 0;
}