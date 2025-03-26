// Taking a floating point number as input, typecsst it into an integer, and print both value:
#include <iostream>
using namespace std;
int main()
{
    float a;
    cout << "Enter a float value: ";
    cin >> a;
    cout << a << endl;
    cout << int(a);
    return 0;
}