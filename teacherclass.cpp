// create a class that defines the teacher's name, salary, department, subject;
#include <iostream>
using namespace std;
class Teacher
{
private:
    string name;
    string department;
    string subject;
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
    void setDept(string d)
    {
        department = d;
    }
    string getDept()
    {
        return department;
    }
    void setSub(string sub)
    {
        subject = sub;
    }
    string getSub()
    {
        return subject;
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
    Teacher t1;
    t1.setName("xyz");
    cout << "Teacher name: " << t1.getName() << endl;
    t1.setSalary(25000);
    cout << "salary: " << t1.getSalary() << endl;
    t1.setDept("Computer Science");
    cout << "Department is: " << t1.getDept() << endl;
    t1.setSub("C++");
    cout << "Subject name is: " << t1.getSub() << endl;
}