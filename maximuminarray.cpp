#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n;
    int arr[500];
    cout << "Enter number of inputs in array:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int size = n;
    int max = INT_MIN;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }
    cout << "Maximum numbers is: " << max;
    return 0;
}