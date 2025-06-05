// Write a program in cpp to count the number of zeroes and ones in a array:
#include <iostream>
using namespace std;
int main()
{
    int arr[500];
    int i;
    int size = 15;
    cout << "Enter input numbers: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int numZero = 0;
    int numOne = 0;
    for(i=0;i<size;i++){
    if (arr[i] == 0)
    {
        numZero++;
    }
    if (arr[i] == 1)
    {
        numOne++;
    }}
    cout << "Number of Zeroes: " << numZero << endl;
    cout << "Number of Ones: " << numOne << endl;
    return 0;
}