//
#include <iostream>
using namespace std;
class Counter
{
private:
    static int a;

public:
    Counter()
    {
        a++;
    }
    void display()
    {
        cout << "The number of objects are created: " << a;
    }
};
int Counter::a = 0;
int main()
{
    Counter c1;
    Counter c2;
    Counter c3;
    Counter c4;
    c4.display();
    return 0;
}
