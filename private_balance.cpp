#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;

public:
    void setBalance(int amount)
    {
        balance = amount;
    }

    void showBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.setBalance(5000);

    account.showBalance();

    return 0;
}