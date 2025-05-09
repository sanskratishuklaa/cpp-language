#include <iostream>
using namespace std;
int main()
{
    double num1, num2, result;
    char operation;

    cout << "simple arithmetic operation program:\n";
    cout << "enter the first number:\n";
    cin >> num1;
    cout << "enter the second number:\n";
    cin >> num2;

    cout << "select an operation (+,-,*,/):";
    cin >> operation;
    switch (operation)
    {
    case '+':
        result = num1 + num2;
        cout << "Result:" << num1 << "+" << num2 << "=" << result;
        break;

    case '-':
        result = num1 - num2;
        cout << "Result:" << num1 << "-" << num2 << "=" << result;
        break;

    case '*':
        result = num1 * num2;
        cout << "Result:" << num1 << "*" << num2 << "=" << result;
        break;

    case '/':
        result = num1 / num2;
        cout << "Result:" << num1 << "/" << num2 << "=" << result;
        break;

    default:
        break;
    }
}