#include <iostream>
using namespace std;
int max(int a, int b, int c)
{
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;
}
int main()
{
    int a, b, c;
    cout << "enter the number: ";
    cin >> a >> b >> c;
    cout << "maximum number is: " << max(a, b, c);
}