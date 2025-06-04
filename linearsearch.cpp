#include <iostream>
using namespace std;
bool find(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
        return false;
    }
}
int main()
{
    int arr[] = {1, 5, 3, 6, 4, 2, 6};
    int size = 7;
    int key;
    cout << "Enter key: " << endl;
    cin >> key;
    if (find(arr, size, key))
    {
        cout << "Element Found.";
    }
    else
    {
        cout << "Not found.";
    }
}