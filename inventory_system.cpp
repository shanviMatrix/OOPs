#include <iostream>
using namespace std;

class Inventory
{
public:
    string productName;
    int quantity;
    int price;

    void addProduct()
    {
        cout << "Enter product name: ";
        cin >> productName;

        cout << "Enter quantity: ";
        cin >> quantity;

        cout << "Enter price: ";
        cin >> price;

        cout << "Product added successfully!" << endl;
    }

    void showProduct()
    {
        cout << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: " << price << endl;
    }

    void sellProduct()
    {
        int amount;

        cout << "Enter quantity to sell: ";
        cin >> amount;

        if (amount <= quantity)
        {
            quantity = quantity - amount;

            cout << "Product sold successfully!" << endl;
        }
        else
        {
            cout << "Not enough stock!" << endl;
        }
    }
};

int main()
{
    Inventory product;

    product.addProduct();

    product.showProduct();

    product.sellProduct();

    product.showProduct();

    return 0;
}