#include <iostream>
using namespace std;

class Library
{
public:
    string bookName;
    string studentName;
    bool issued;

    void addBook()
    {
        cout << "Enter book name: ";
        cin >> bookName;

        issued = false;

        cout << "Book added successfully!" << endl;
    }

    void issueBook()
    {
        if (issued == false)
        {
            cout << "Enter student name: ";
            cin >> studentName;

            issued = true;

            cout << "Book issued successfully!" << endl;
        }
        else
        {
            cout << "Book is already issued!" << endl;
        }
    }

    void showDetails()
    {
        cout << endl;
        cout << "Book Name: " << bookName << endl;

        if (issued == true)
        {
            cout << "Issued To: " << studentName << endl;
        }
        else
        {
            cout << "Book is available" << endl;
        }
    }
};

int main()
{
    Library book;

    book.addBook();

    book.issueBook();

    book.showDetails();

    return 0;
}