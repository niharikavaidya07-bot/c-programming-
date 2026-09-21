#include <iostream>
using namespace std;

class Library
{
protected:
    int itemID;
    string title;

public:
    void accept()
    {
        cout << "Enter Item ID: ";
        cin >> itemID;

        cout << "Enter Title: ";
        cin >> title;
    }

    void display()
    {
        cout << itemID << " " << title << endl;
    }
};

class Book : public Library
{
    string author;

public:
    void acceptBook()
    {
        accept();

        cout << "Enter Author: ";
        cin >> author;
    }

    void displayBook()
    {
        display();
        cout << author << endl;
    }
};

class Magazine : public Library
{
    int issueNo;

public:
    void acceptMagazine()
    {
        accept();

        cout << "Enter Issue Number: ";
        cin >> issueNo;
    }

    void displayMagazine()
    {
        display();
        cout << issueNo << endl;
    }
};

int main()
{
    Book b;
    Magazine m;

    b.acceptBook();
    m.acceptMagazine();

    b.displayBook();
    m.displayMagazine();

    return 0;
}

