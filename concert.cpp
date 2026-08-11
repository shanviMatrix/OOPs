#include <iostream>
using namespace std;

class Person
{
public:
    string phone;
    int age;
    string mail;

    // Constructor
    Person(string p, int a, string m)
    {
        phone = p;
        age = a;
        mail = m;
    }

    void display()
    {
        cout << "Phone: " << phone << endl;
        cout << "Age: " << age << endl;
        cout << "Mail: " << mail << endl;
    }
};

int main()
{
    Person p1("9876543210", 21, "shanvi@gmail.com");

    p1.display();

    return 0;
}