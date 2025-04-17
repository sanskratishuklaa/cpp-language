// Write a class employee with the private attributes name, position, and salary, and the public method to displat the details:
#include <iostream>
using namespace std;
class Employee
{
private:
    string name, position;
    double salary;
 public:
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    void setPosition(string p)
    {
        position = p;
    }
    string getPosition()
    {
        return position;
    }
    void setSalary(double s)
    {
        salary = s;
    }
    double getSalary()
    {
        return salary;
    }
};
int main()
{
    string name, position;
    double salary;
    Employee e1;
    e1.setName("Amit");
    cout << "Employee's name is: " << e1.getName() << endl;
    e1.setPosition("HR manager");
    cout << "Employee's position is: " << e1.getPosition() << endl;
    e1.setSalary(1200000);
    cout << "Employee's salary is: " << e1.getSalary() << endl;
    return 0;
}