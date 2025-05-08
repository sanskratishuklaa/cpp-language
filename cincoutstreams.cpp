// Write a program to perform basic input output using streams(cin and cout):
#include <iostream>
using namespace std;
int main()
{
    string name;
    int age;
    cout << "Enter your name: " << endl;
    cin >> name;
    cout<< "Enter your age: " << endl;
    cin >> age;
    cout << "Your name is " << name << " and your age is " << age << endl;
    return 0;
}