#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float salary;

public:
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee Details:" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1;

    e1.input();
    e1.display();

    return 0;
}