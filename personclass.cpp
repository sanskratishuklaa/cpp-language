// Create a class person with private attributes name, age, and public mehtods to set and get the values.
#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }
};
int main()
{
    Person p1;
    p1.setName("Sanskrati Shukla");
    cout << "Person name is: " << p1.getName() << endl;
    p1.setAge(17);
    cout << "Person age is: " << p1.getAge() << endl;
}