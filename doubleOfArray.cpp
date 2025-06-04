#include <iostream>
using namespace std;
int main()
{
    int arr[500];
    int n;
    cout << "Enter no. of inputs: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << 2 * arr[i]<<" ";
    }
}