// Write a class box with a member function that return the current object using the this pointer:
#include <iostream>
using namespace std;
class Box
{
public:
    int length;
    int breadth;
    int height;
    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    Box *getCurrentBox()
    {
        return this;
    }
};
int main()
{
    Box b(20, 72, 60);
    Box *currentBox = b.getCurrentBox();
    cout << "Length: " << currentBox->length << endl;
    cout << "Breadth: " << currentBox->breadth << endl;
    cout << "Height: " << currentBox->height << endl;
    return 0;
}