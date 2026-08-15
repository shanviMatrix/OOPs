#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void area()
    {
        cout << "Area of Circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "Area of Rectangle" << endl;
    }
};

int main()
{
    Shape* shape;

    Circle c;
    Rectangle r;

    shape = &c;
    shape->area();

    shape = &r;
    shape->area();

    return 0;
}