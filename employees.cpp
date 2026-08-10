#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int age;
    int salary;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1;

    e1.name = "Shanvi";
    e1.age = 21;
    e1.salary = 50000;

    e1.display();

    return 0;
}