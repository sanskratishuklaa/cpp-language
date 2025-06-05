//
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 2, 4, 6, 2, 7, 3, 2, 4, 2, 6, 7, 2};
    int size = 14;
    int numTwo = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 2)
        {
            numTwo++;
        }
    }
    cout << "Number of twos: " << numTwo << endl;
}