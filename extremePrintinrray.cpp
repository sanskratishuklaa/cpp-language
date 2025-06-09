#include <iostream>
using namespace std;
int main()
{
    int arr[500];
    int n;
    cout << "Enter no. of inputs: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int size = n;
    int start = 0;
    int end = size - 1;
    while (true)
    {
        if (start > end)
            break;
        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }
    return 0;
}