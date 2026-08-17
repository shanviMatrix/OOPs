#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    int salary;

    void input()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee employees[10];
    int count = 0;
    int choice;

    while(true)
    {
        cout << "\n1. Add Employee" << endl;
        cout << "2. Display Employees" << endl;
        cout << "3. Search Employee" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            employees[count].input();
            count++;

            cout << "Employee added!" << endl;
        }
        else if(choice == 2)
        {
            for(int i = 0;i < count;i++)
            {
                cout << endl;
                employees[i].display();
            }
        }
        else if(choice == 3)
        {
            int id;
            bool found = false;

            cout << "Enter employee ID: ";
            cin >> id;

            for(int i = 0;i < count;i++)
            {
                if(employees[i].id == id)
                {
                    employees[i].display();
                    found = true;
                }
            }

            if(found == false)
                cout << "Employee not found!" << endl;
        }
        else if(choice == 4)
        {
            break;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}