#include <iostream>
using namespace std;

class BankAccount
{
public:
    string name;
    int accountNumber;
    double balance;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b1;

    b1.name = "Shanvi";
    b1.accountNumber = 12345;
    b1.balance = 50000;

    b1.display();

    return 0;
}