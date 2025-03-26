// write a cpp program to calculate the area of rectangle:
#include <iostream>
using namespace std;
int main()
{
    float length, breadth, area;
    cout << "Enter a length of rectangle: ";
    cin >> length;
    cout << "Enter a breadth of rectangle: ";
    cin >> breadth;
    area = length * breadth;
    cout << "Area of rectangle is: " << area << endl;
}