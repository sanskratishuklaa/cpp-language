#include <iostream>
#include <stdexcept>
using namespace std;

int Add(int a, int b)
{
    int number;
    if (b < 0 && a)
    throw overflow_error("Integer overflow occurred during addition.");

    return a + b;
}

int main()
{
    int x, y;

    cout << "Enter two integers to add: ";
    cin >> x >> y;

    try
    {
        int result = Add(x, y);
        cout << "Result: " << result;
    }
    catch (const overflow_error &e)
    {
        cerr << "Error: " << e.what();
    }

    {
        cout << " Program continues after exception handling.";
    }
}
