#include <iostream>
using namespace std;

class ATM
{
private:
    int balance;

public:
    ATM()
    {
        balance = 5000;
    }

    void checkBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }

    void deposit()
    {
        int amount;

        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Amount deposited successfully!" << endl;
    }

    void withdraw()
    {
        int amount;

        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;

            cout << "Please collect your cash." << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main()
{
    ATM account;

    int choice;

    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        account.checkBalance();
    }
    else if (choice == 2)
    {
        account.deposit();
        account.checkBalance();
    }
    else if (choice == 3)
    {
        account.withdraw();
        account.checkBalance();
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}