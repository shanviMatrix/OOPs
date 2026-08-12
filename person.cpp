#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
public:
    int rollNo;

    void displayRollNo()
    {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s1;

    s1.name = "Shanvi";
    s1.rollNo = 101;

    s1.displayName();
    s1.displayRollNo();

    return 0;
}