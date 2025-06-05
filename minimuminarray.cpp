#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n;
    int arr[500];
    cout << "Enter no. of inputs: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int size = n;
    int min = INT_MAX;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] < min)
        {
            min = arr[j];
        }
    }
    cout << "Minimum number is: " << min;
    return 0;
}