#include <iostream>
using namespace std;

class Hostel
{
public:
    string dept;
    string preference;

    // Constructor
    Hostel(string d, string p)
    {
        dept = d;
        preference = p;
    }

    void display()
    {
        cout << "Department: " << dept << endl;
        cout << "Preference: " << preference << endl;
    }
};

int main()
{
    Hostel h1("MCA", "Single Room");

    h1.display();

    return 0;
}