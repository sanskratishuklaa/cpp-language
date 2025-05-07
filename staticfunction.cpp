// Write a program in cpp to print a hello world using static function:
#include <iostream>
using namespace std;
class MyClass
{
public:
    static void printMessage()
    {
        cout << "Hello WOrld." << endl;
    }
};
int main()
{
    MyClass::printMessage();
    return 0;
}