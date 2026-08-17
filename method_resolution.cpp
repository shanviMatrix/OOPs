#include <iostream>
using namespace std;

class Father
{
public:
    void show()
    {
        cout << "Father show" << endl;
    }
};

class Mother
{
public:
    void show()
    {
        cout << "Mother show" << endl;
    }
};

class Child : public Father, public Mother
{
};

int main()
{
    Child c1;

    c1.Father::show();
    c1.Mother::show();

    return 0;
}