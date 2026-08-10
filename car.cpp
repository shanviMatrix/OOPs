#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main()
{
    Car c1;

    c1.brand = "Toyota";
    c1.model = "Fortuner";
    c1.year = 2024;

    c1.display();

    return 0;
}