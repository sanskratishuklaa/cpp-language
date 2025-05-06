// Create an inline functiion that returns the cube of number:
#include <iostream>
using namespace std;
inline long cubeOfNum(int num)
{
    return num * num * num;
}
int main()
{
    int num;
    cout << "Enter number: " << endl;
    cin >> num;
    cout << "Cube of " << num << " is: " << cubeOfNum(num);
    return 0;
}