#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string n,int a)
    {
        name = n;
        age = a;
    }

    friend ostream& operator<<(ostream& out,Student s)
    {
        out << "Name: " << s.name << endl;
        out << "Age: " << s.age;
        return out;
    }
};

int main()
{
    Student s1("Shanvi",21);

    cout << s1;

    return 0;
}