#include <iostream>
using namespace std;

class Vehicle
{
public:
    void start()
    {
        cout << "Vehicle is starting" << endl;
    }
};

class Car : public Vehicle
{
public:
    void drive()
    {
        cout << "Car is driving" << endl;
    }
};

int main()
{
    Car c1;

    c1.start();
    c1.drive();

    return 0;
}