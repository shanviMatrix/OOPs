#include <iostream>
using namespace std;

class Number
{
public:
    int value;

    Number(int v)
    {
        value = v;
    }

    Number operator+(Number n)
    {
        return Number(value + n.value);
    }
};

int main()
{
    Number n1(10);
    Number n2(20);

    Number n3 = n1 + n2;

    cout << "Sum: " << n3.value << endl;

    return 0;
}