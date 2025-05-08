// write an inline function that calculates the square of a number:
#include <iostream>
using namespace std;
inline long square(int num)
{
    return num * num;
}
int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << "Square of " << num << " is " << square(num);
    return 0;
}