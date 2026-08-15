#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int marks1;
    int marks2;
    int marks3;

    void input()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter marks of subject 1: ";
        cin >> marks1;

        cout << "Enter marks of subject 2: ";
        cin >> marks2;

        cout << "Enter marks of subject 3: ";
        cin >> marks3;
    }

    void result()
    {
        int total = marks1 + marks2 + marks3;

        float percentage = total / 3.0;

        cout << endl;
        cout << "Student Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 40)
        {
            cout << "Result: Pass" << endl;
        }
        else
        {
            cout << "Result: Fail" << endl;
        }
    }
};

int main()
{
    Student s1;

    s1.input();
    s1.result();

    return 0;
}