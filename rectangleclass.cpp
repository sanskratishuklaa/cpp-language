// create a class reactangle with private attribute for length and width, and public methods to calculate area and perimeter:
#include <iostream>
using namespace std;
class Rectangle
{
private:
    double length, width;

public:
    Rectangle(double l, double w)
    {
        l = length;
        w = width;
    }
    void display()
    {
        cout << "Enter a length: " << endl;
        cin >> length;
        cout << "Enter a width: " << endl;
        cin >> width;
    }
    double calculateArea()
    {
        return length * width;
    }
    double calculatePerimeter()
    {
        return 2 * (length + width);
    }
};
int main()
{
    double length, width;
    Rectangle r1(length, width);
    r1.display();
    cout << r1.calculateArea() << endl;
    cout << r1.calculatePerimeter() << endl;
    return 0;
}