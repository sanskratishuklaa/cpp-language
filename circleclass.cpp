// create a class circle with a friend function to calculate the area:
#include <iostream>
using namespace std;
class Circle
{
public:
    float radius, pi;
    Circle(float r, float p)
    {
        radius = r;
        pi = p;
    }
    friend float CalculateArea(Circle c1);
};
float CalculateArea(Circle c1)
{
    return c1.pi * c1.radius * c1.radius;
};
int main()
{
    float r;
    cout<<"Enter a radius: "<<endl;
    cin>>r;
    Circle c1(3.14,r);
    float totalArea = CalculateArea(c1);
    cout << "Total area of circle is: " << totalArea << endl;
}
