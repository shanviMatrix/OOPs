#include <iostream>
using namespace std;

class Father
{
public:
    void father()
    {
        cout << "Father class" << endl;
    }
};

class Mother
{
public:
    void mother()
    {
        cout << "Mother class" << endl;
    }
};

class Child : public Father, public Mother
{
public:
    void child()
    {
        cout << "Child class" << endl;
    }
};

int main()
{
    Child c1;

    c1.father();
    c1.mother();
    c1.child();

    return 0;
}