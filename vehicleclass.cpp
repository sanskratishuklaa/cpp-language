// Write a program that uses pure virtual function to create an abstract class vehicle with derived classes car and bike:
#include <iostream>
using namespace std;
class Vehicle
{
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};
class Car : public Vehicle
{
public:
    void start() override
    {
        cout << "Car start." << endl;
    }
    void stop() override
    {
        cout << "Car stop." << endl;
    }
};
class Bike : public Vehicle
{
public:
    void start() override
    {
        cout << "Bike start." << endl;
    }
    void stop() override
    {
        cout << "Bike stop." << endl;
    }
};
int main()
{
    Car c;
    c.start();
    c.stop();
    Bike b;
    b.start();
    b.stop();
    return 0;
}