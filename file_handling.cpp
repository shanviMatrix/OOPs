#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void writeData()
    {
        ofstream file("student.txt");

        file << name << endl;
        file << age << endl;

        file.close();
    }

    void readData()
    {
        ifstream file("student.txt");

        file >> name;
        file >> age;

        file.close();

        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;

    s1.name = "Shanvi";
    s1.age = 21;

    s1.writeData();
    s1.readData();

    return 0;
}