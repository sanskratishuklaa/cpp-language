// Implement a base class shape with derived classes circle, rectangle, and triangle. use virtual functions to calculate the area of each shape:
#include <iostream>
#include <cmath>
using namespace std;
class Shape
{
public:
    virtual void area()
    {
        cout << "These are Shapes." << endl;
    }
};
class Circle : public Shape
{
public:
    float radius;
    Circle(float r)
    {
        radius = r;
    }
    void area() override
    {
        cout << "Area of circle is: " << M_PI * radius * radius << endl;
    }
};
class Rectangle : public Shape
{
public:
    float length;
    float breadth;
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }
    void area() override
    {
        cout << "Area of rectangle is: " << length * breadth << endl;
    }
};
class Triangle : public Shape
{
public:
    float base;
    float height;
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }
    void area() override
    {
        cout << "Area of triangle is: " << 0.5 * base * height << endl;
    }
};
int main()
{
    Shape *s;
    Circle c(6.8);
    Rectangle r(7, 4);
    Triangle t(7.4, 8.5);
    s = &c;
    s->area();
    s = &r;
    s->area();
    s = &t;
    s->area();
    return 0;
}