#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    // Setter
    void setAge(int a)
    {
        age = a;
    }

    // Getter
    int getAge()
    {
        return age;
    }
};

int main()
{
    Student s1;

    s1.setAge(21);

    cout << "Age: " << s1.getAge() << endl;

    return 0;
}