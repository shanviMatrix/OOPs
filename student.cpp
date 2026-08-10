#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int rollNo;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s1;

    s1.name = "Shanvi";
    s1.age = 21;
    s1.rollNo = 101;

    s1.display();

    return 0;
}