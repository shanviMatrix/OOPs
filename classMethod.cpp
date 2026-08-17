#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    void showName()
    {
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1;

    s1.name = "Shanvi";
    s1.showName();

    return 0;
}