// Create a base class animal with a virtual function speak().Implement derived classes Dog, Cat and Bird each overriding the speak() function:
#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    virtual void speak()
    {
        cout << "These are animal and they speaks." << endl;
    }
};
class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "Dog Barks " << endl;
    }
};
class Cat : public Animal
{

public:
    void speak() override
    {
        cout << "Cat Meow: " << endl;
    }
};
class Bird : public Animal
{
public:
    void speak() override
    {
        cout << "Birds Chirping " << endl;
    }
};
int main()
{
    Animal *a;
    Dog d;
    Cat c;
    Bird b;
    a = &d;
    a->speak();
    a = &c;
    a->speak();
    a = &b;
    a->speak();
    return 0;
}