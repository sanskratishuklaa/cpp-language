// Write a program in cpp to swap a value of two variable using pointers:
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int c;
    c = *a;  // copy the value of a to other variable c
    *a = *b; // copy the value of (b) to (a)
    *b = c;  // copy the value of (a) stored in (c) to (b)
}
int main()
{
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    swap(&a, &b);
    cout << "first numbers is:" << a << endl;
    cout << "second number is: " << b << endl;
    return 0;
}