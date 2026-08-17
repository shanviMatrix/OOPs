#include <iostream>
using namespace std;

class Calculator
{
public:
    static void add(int a,int b)
    {
        cout << "Sum: " << a + b << endl;
    }
};

int main()
{
    Calculator::add(10,20);

    return 0;
}